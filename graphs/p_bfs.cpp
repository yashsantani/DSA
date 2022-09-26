#include <bits/stdc++.h>
using namespace std;
// const int N = 1e5 + 2;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr[100];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    // vector<int>::iterator it;
    // for (int i = 1; i < n; i++)
    // {
    //     cout << i << "->";
    //     for (it = arr[i].begin(); it != arr[i].end(); it++)
    //     {
    //         cout << *it;
    //     }
    //     cout << endl;
    // }
    queue<int> q;
    bool vis[100] = {0};
    q.push(4);
    vis[4] = true;
    vector<int>::iterator it;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node;
        for (it = arr[node].begin(); it != arr[node].end(); it++)
        {
            if (!vis[*it])
            {
                q.push(*it);
                vis[*it] = 1;
            }
        }
    }
}