#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 2, 1, 5, 6, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[1]);
    int ns[n];
    int ps[n];
    stack<int> st;
    stack<int> st2;
    int max_area = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ps[i] = -1;
        }
        else
        {
            ps[i] = st.top();
        }
        st.push(i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st2.empty() && arr[st2.top()] >= arr[i])
        {
            st2.pop();
        }
        if (st2.empty())
        {
            ns[i] = 9;
        }
        else
        {
            ns[i] = st2.top();
        }
        st2.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        int currarea = (ns[i] - ps[i] - 1) * arr[i];
        max_area = max(max_area, currarea);
    }
    cout << max_area << " ";
    // for (int i = 0; i < n; i++)
    //     cout << ps[i] << " ";
    // cout << endl;
    // for (int i = 0; i < n; i++)
    //     cout << ns[i] << " ";
}