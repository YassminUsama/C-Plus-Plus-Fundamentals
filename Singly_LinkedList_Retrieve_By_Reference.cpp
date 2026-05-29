// Solution for Data Structures - Linked List: Value Retrieval
/* This program demonstrates how to search for a value and "retrieve" it
   back to the main function using Pass-by-Reference. This is highly efficient
   for extracting data from the list. */

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
bool retrieve(int value, int &result) {
Node* temp = head;
while (temp != NULL) {
if (temp->data == value) {
result = temp->data; // take copy 
return true;
}
temp = temp->next;
}
return false; // not found
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
int x;
if (list.retrieve(30, x)) {
cout << "Found: " << x << endl;
} else {
cout << "Not found" << endl;
}
return 0;
}
