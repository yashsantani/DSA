#include <bits/stdc++.h>
using namespace std;
const int N = 1e+2;
bool vis[N] = {0};
vector<int> arr[N];
void dfs(int node)
{
    // preorder
    vis[node] = 1;
    cout << node << " ";
    vector<int>::iterator it;
    for (it = arr[node].begin(); it != arr[node].end(); it++)
    {
        if (!vis[*it])
            dfs(*it);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    dfs(1);
}