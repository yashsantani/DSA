#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 0, 1, 3, 2, 1, 0, 1, 2, 3, 2, 2};
    stack<int> st;
    int maxelem = 0;
    int area = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            else
            {
                int diff = i - st.top() - 1;
                int num = min(arr[st.top()], arr[i]);
                area += (num - arr[cur]) * diff;
            }
        }
        st.push(i);
    }
    cout << area;
}