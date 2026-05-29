// Solution for Data Structures - Linked List: Remove from Beginning
/* This program demonstrates how to safely delete the first node of a 
   Linked List. It ensures proper memory management by using 'delete' 
   to free up space in the heap.*/

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

    // The Removal Logic (From your image)
    void removeFromBeginning() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node* temp = head;      
        head = head->next;     
        delete temp;          
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
    list.removeFromBeginning();
    cout << "After deletion:  ";
    list.print();

    return 0;
}
