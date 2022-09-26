#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool visited[n] = {0};
    vector<int> arr[100];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    visited[1] = true;
    vector<int>::iterator it;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << endl;
        vector<int>::iterator it;
        for (it = arr[node].begin(); it != arr[node].end(); it++)
        {
            if (!visited[*it])
            {
                visited[*it] = 1;
                q.push(*it);
            }
        }
    }
}