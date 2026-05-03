// Solution for Sec6- Example: Circular Queue Implementation
/* This program solves the "Wasted Space" issue of Linear Queues by using 
   circular increment logic. It allows reusing empty spaces at the beginning 
   of the array after elements are dequeued. */
#include <iostream>
using namespace std;
#define SIZE 5
class CircularQueue {
private:
int arr[SIZE];
int front, rear;
public:
CircularQueue() {
front = -1;
rear = -1;
}
bool isFull() {
return (front == (rear + 1) % SIZE);
}
bool isEmpty() {
return (front == -1);
}
void enqueue(int value) {
if (isFull()) {
cout << "Queue Overflow\n";
return;
}
if (isEmpty()) {
front = rear = 0;
} else {
rear = (rear + 1) % SIZE;
}
arr[rear] = value;
cout << value << " inserted\n";
}

void dequeue() {
if (isEmpty()) {
cout << "Queue Underflow\n";
return;
}
cout << arr[front] << "removed\n";
if (front == rear) {
front = rear = -1;
} else {
front = (front + 1) % SIZE;
}}
void display() {
if (isEmpty()) {
cout << "Queue is empty\n";
return;
}
cout << "Queue elements: ";
int i = front;
while (true) {
cout << arr[i] << " ";
if (i == rear)
{break;}
i = (i + 1) % SIZE;
}
cout << endl;
}
};
int main() {
CircularQueue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
cout<<"Display 1:";
q.display();
q.dequeue();
q.dequeue();
cout<<"Display 2:";
q.display();
q.enqueue(60);
q.enqueue(70);
cout<<"Display 3:";
q.display();
return 0;
}
