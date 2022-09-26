#include <bits/stdc++.h>
using namespace std;
class que
{

    stack<int> st1;
    stack<int> st2;

public:
    void push(int x)
    {
        st1.push(x);
    }
    int pop()
    {
        while (st1.empty() && st2.empty())
        {
            cout << "no element" << endl;
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topval = st2.top();
        st2.pop();
        return topval;
    }

    bool empty()
    {
        if (st1.empty() && st2.empty())
        {

            return true;
        }
        return false;
    }
};

int main()
{
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
}