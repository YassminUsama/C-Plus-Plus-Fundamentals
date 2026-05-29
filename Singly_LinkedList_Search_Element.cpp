// Solution for Data Structures - Linked List: Find Element
/* This program adds a search functionality to the Singly Linked List.
   It traverses the list to find a specific value and returns a boolean result.*/

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
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    bool search(int value) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == value) {
                return true; 
            }
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    LinkedList list;
    list.insertend(10);
    list.insertend(20);
    list.insertend(30);

    cout << "Current List Contents:" << endl;
    list.print();
    int target = 20;
    if (list.search(target)) {
        cout << "Element " << target << " Found in the list!" << endl;
    } else {
        cout << "Element " << target << " Not Found." << endl;
    }
    return 0;
}
