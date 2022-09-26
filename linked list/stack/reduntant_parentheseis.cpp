#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "((a+b))";
    string str2 = "((a+b)+a)";

    stack<char> st;
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] == '(' || str2[i] == '+' || str2[i] == '-' || str2[i] == '*' || str2[i] == '/')
        {
            st.push(str2[i]);
        }
        if (str2[i] == ')')
        {
            if (st.top() == '(')
            {
                cout << "unbalanced";
                break;
            }
            while (st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
    }
}