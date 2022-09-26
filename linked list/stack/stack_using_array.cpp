#include <iostream>
using namespace std;

#define n 100

class stack
{
    // public:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no element to pop" << endl;
            return;
        }
        top--;
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "no element " << endl;
            return;
        }
        cout << arr[top] << endl;
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
    }
    void display()
    {
        int pt = top;
        while (pt != -1)
        {
            cout << arr[pt] << endl;
            pt--;
        }
    }
};
int main()
{
    stack st;
    st.Top();
    st.push(2);
    st.Top();
    st.push(3);
    st.push(6);
    st.push(5);
    st.Top();
    st.pop();
    st.Top();
    st.display();
}