#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }
    priority_queue<int, vector<int>, greater<int>> minheap;
    for (int i = 0; i < n; i++)
    {
        minheap.push(a[i]);
    }
    int ans = 0;
    while (minheap.size() > 1)
    {
        int num1;
        num1 = minheap.top();
        minheap.pop();
        int num2;
        num2 = minheap.top();
        minheap.pop();
        ans += num1 + num2;

        minheap.push(num1 + num2);
    }
    cout << ans;
}
