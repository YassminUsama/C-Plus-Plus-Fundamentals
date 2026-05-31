// Solution for Data Structures: Replace the Nth Element in a Queue
/* This logic demonstrates how to update a specific element in a FIFO 
   structure by migrating elements to a temporary buffer, inserting the 
   new value, and rebuilding the sequence. */
#include <iostream>
#include <queue>
using namespace std;
void deleteNthNum(queue<int>& q, int n) {
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

    for (int i = 0; i <n-1; i++) {
        r.push(q.front()); 
        q.pop();           
    }
    cout<<"Enter new value: ";
    cin>>num;
    r.push(num);
    q.pop();
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

    cout << "Queue before deleting nth items: ";
    printQueue(q);

    int n;
    cout<<"Enter value of nth element:  ";
    cin>>n;
    deleteNthNum(q, n);

    cout << "Queue after deleting last " << n << " th items: ";
    printQueue(q);

    return 0;
}
