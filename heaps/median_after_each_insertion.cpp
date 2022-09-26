#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>> pqmax;
priority_queue<int, vector<int>, greater<int>> pqmin;
void insert(int data)
{
    if (pqmax.size() == pqmin.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(data);
            return;
        }
        if (data < pqmax.top())
        {
            pqmax.push(data);
        }
        else
        {
            pqmin.push(data);
        }
    }
    else
    {
        if (pqmax.size() > pqmin.size())
        {
            if (data >= pqmax.top())
            {
                pqmin.push(data);
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(data);
            }
        }
        else
        {
            if (data <= pqmin.top())
            {
                pqmax.push(data);
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(data);
            }
        }
    }
}
double median()
{
    if (pqmin.size() == pqmax.size())
    {
        return (pqmin.top() + pqmax.top()) / 2.0;
    }
    else if (pqmax.size() > pqmin.size())
    {
        return pqmax.top();
    }
    else
    {
        return pqmin.top();
    }
}
int main()
{
    insert(10);
    cout << median() << " ";
    insert(15);
    cout << median() << " ";
    insert(30);
    cout << median() << " ";
    insert(21);
    cout << median() << " ";
    insert(19);
    cout << median() << " ";
}