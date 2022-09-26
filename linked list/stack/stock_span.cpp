#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {100, 80, 60, 70, 68, 75, 85};
    int n = sizeof(arr) / sizeof(arr[1]);
    stack<pair<int, int>> st;
    int ps[n];

    for (int i = 0; i < n; i++)
    {
        int days = 1;
        while (!st.empty() && st.top().first <= arr[i])
        {
            days += st.top().second;
            st.pop();
        }
        st.push({arr[i], days});
        ps[i] = days;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ps[i] << " ";
    }
}
