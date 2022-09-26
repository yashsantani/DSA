#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int topst = st.top();
    st.pop();
    insert_at_bottom(st, ele);
    st.push(topst);
}

void reverse_stack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int topele = st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st, topele);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse_stack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}