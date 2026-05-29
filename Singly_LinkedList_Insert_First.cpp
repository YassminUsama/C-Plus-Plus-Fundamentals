// Solution for Data Structures - Linked List: Insert at Beginning
/* This implementation focuses on adding elements to the start of the list.*/

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
    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
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
    list.insert(10);
    list.insert(20);
    list.insert(30);
    cout << "List after inserting at beginning:" << endl;
    list.print(); 
    return 0;
}
 // Output: 30 -> 20 -> 10 -> NULL
