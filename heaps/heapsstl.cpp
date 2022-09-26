#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max heap
    priority_queue<int, vector<int>> pq;
    pq.push(1);
    pq.push(3);
    pq.push(12);
    pq.push(2);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(1);
    pqm.push(3);
    pqm.push(12);
    pqm.push(2);
    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl;
}