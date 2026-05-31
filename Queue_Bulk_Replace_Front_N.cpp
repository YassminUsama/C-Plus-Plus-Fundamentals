// Solution for Data Structures: Bulk Replace Front N Elements in a Queue
/* This program allows the user to update the first 'n' elements of a queue 
   with new values, ensuring the rest of the queue remains intact. 
   Demonstrates advanced queue manipulation using a temporary buffer. */
#include <iostream>
#include <queue>
using namespace std;
void deleteNElement(queue<int>& q, int n) {
    queue<int> r; 
    int num;
    int size= q.size();
    if (n >= size)
    {
        while (!q.empty()) {
            q.pop();
        }
        return;
    }
    for (int i = 0; i<n; i++) {
       cout<<"Enter "<< i+1<< " element: ";
       cin>>num;
       r.push(num);
       q.pop();
    }
    while(!q.empty())
    {
      r.push(q.front());
      q.pop();
    }
    q=r;
}
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout <<"Queue before updates: ";
    printQueue(q);
    int n;
    cout<<"How many front elements do you want to replace? ";
    cin>>n;
    deleteNElement(q, n);
    cout <<"Queue after updates: ";
    printQueue(q);

    return 0;
}
