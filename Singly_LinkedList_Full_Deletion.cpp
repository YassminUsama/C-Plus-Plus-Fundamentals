// Solution for Data Structures - Linked List: Remove Specific Value
/* This is the most comprehensive deletion logic for a Linked List.
   It handles deleting the head, a middle node, or the last node by 
   maintaining a 'prev' pointer to bridge the gap after deletion. */

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class LinkedList {
public:
Node* head;
LinkedList() {
head = NULL;
}
void insertEnd(int value) {
Node* newNode = new Node;
newNode->data = value;
newNode->next = NULL;
if (head == NULL) {
head = newNode;
return;
}
Node* temp = head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
void removeValue(int value) {
Node* temp = head;
Node* prev = NULL;
while (temp != NULL) {
if (temp->data == value) {
// first element
if (prev == NULL) {
head = temp->next;
} 
else {
prev->next = temp->next;
}
delete temp;
return;
}
prev = temp;
temp = temp->next;
}
cout << "Not found" << endl;
}
void print() {
Node* temp = head;
while (temp != NULL) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
};
int main() {
LinkedList list;
list.insertEnd(10);
list.insertEnd(20);
list.insertEnd(30);
cout << "Before deletion: ";
list.print();
list.removeValue(20);
cout << "After deletion: ";
list.print();
return 0;
}
