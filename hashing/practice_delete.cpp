#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    int arr1[l1], arr2[l2], arr3[l3];
    for (int i = 0; i < l1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < l2; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < l3; i++)
    {
        cin >> arr3[i];
    }
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = l1 - 1; i >= 0; i++)
    {
        sum1 += arr1[i];
        st1.push(sum1);
    }
    for (int i = l2 - 1; i >= 0; i++)
    {
        sum2 += arr2[i];
        st2.push(sum2);
    }
    for (int i = l3 - 1; i >= 0; i++)
    {
        sum3 += arr3[i];
        st3.push(sum3);
    }
    int maxh = 0;
    while (true)
    {
        if (st1.empty() || st2.empty() || st3.empty())
        {
            break;
        }

        else if (sum1 == sum2 == sum3)
        {
            maxh = sum1;
            break;
        }
        else if (sum1 > sum2 && sum1 >> sum3)
        {

            st1.pop();
        }
        else if (sum2 > sum1 && sum2 >> sum3)
        {

            st2.pop();
        }
        else if (sum3 > sum2 && sum3 >> sum1)
        {

            st3.pop();
        }
    }
    cout << maxh;
}