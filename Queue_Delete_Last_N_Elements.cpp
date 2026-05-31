// Solution for Data Structures: Remove Last N Elements from a Queue
/* This algorithm intelligently preserves the first (size - n) elements 
   and discards the rest to simulate deleting from the back of a FIFO structure. */
#include <iostream>
#include <queue>
using namespace std;
void deleteLastN(queue<int>& q, int n) {
    queue<int> r; 
    int size= q.size();
    if (n >= size) 
    // we can't say remove 10=n from 5=q.size() (-5),
    // we say remove 5=n from 10=q.size().
    // So if n >= size, we must pop all elements in queue to prevent crashing.
    {
        while (!q.empty()) {
            q.pop();
        }
        return;
    }
    int count = size - n;

    for (int i = 0; i < count; i++) {
        r.push(q.front()); 
        q.pop();           
    }
    q = r; 
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

    cout << "Queue before deleting last n items: ";
    printQueue(q);
    int n;
    cout<<"Enter value of n:  ";
    cin>>n;
    deleteLastN(q, n);
    cout << "Queue after deleting last " << n << " items: ";
    printQueue(q);
    return 0;
}
