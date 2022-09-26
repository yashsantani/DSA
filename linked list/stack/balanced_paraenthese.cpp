#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool bal_par(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            st.push(str[i]);
        }

        else if (str[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }

        else if (str[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }

        else if (str[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "{[(])}";
    cout << bal_par(str);
}