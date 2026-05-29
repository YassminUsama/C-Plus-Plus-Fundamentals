// Solution for Data Structures - Linked List: Replace Operation
/* This implementation adds a 'replace' functionality. It searches for an
   old value within the list and updates it with a new value upon the 
   first match found.*/

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
    void insertend(int value) {
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
    void replace(int oldValue, int newValue) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == oldValue) {
                temp->data = newValue;
                return; 
            }
            temp = temp->next;
        }
        cout << "Value not found" << endl;
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
    list.insertend(10);
    list.insertend(20);
    list.insertend(30);

    cout << "Before replace: ";
    list.print();
    list.replace(20, 99);
    cout << "After replace:  ";
    list.print();

  return 0;
}
