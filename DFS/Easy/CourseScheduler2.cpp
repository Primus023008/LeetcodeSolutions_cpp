#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> indeg;
    vector<vector<int>> adj;
    vector<int> result;

    void edge(int a, int b)
    {
        adj[b].push_back(a);
        indeg[a]++;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        indeg.assign(numCourses, 0);
        adj.assign(numCourses, vector<int>());

        for (int i = 0; i < prerequisites.size(); i++)
        {
            edge(prerequisites[i][0], prerequisites[i][1]);
        }

        if (prerequisites.size() == 0)
        {
            for (int i = 0; i < numCourses; i++)
            {
                result.push_back(i);
            }
            return result;
        }

        queue<int> q;

        for (int i = 0; i < indeg.size(); i++)
        {
            if (indeg[i] == 0)
                q.push(i);
        }

        while (!q.empty())
        {
            int f = q.front();

            q.pop();
            result.push_back(f);

            for (auto i : adj[f])
            {
                indeg[i]--;
                if (indeg[i] == 0)
                {
                    q.push(i);
                }
            }
        }

        if (result.size() != numCourses)
        {
            result = {};
        }

        return result;
    }
};

int main()
{
    Solution s;
    int numCourses = 3;

    vector<vector<int>> prerequisites = {{1, 0}, {1, 2}, {0, 1}};

    vector<int> result = s.findOrder(numCourses, prerequisites);

    for (int i = 0; i < numCourses; i++)
    {
        cout << result[i] << " ";
    }
}