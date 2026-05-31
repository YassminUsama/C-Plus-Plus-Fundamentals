// Solution for Data Structures: Filtering Odd Elements from Linked List to Stack
/* This advanced implementation traverses a Linked List, filters out even numbers, 
   and pushes only odd elements into a Stack while maintaining their original sequence. */

#include <iostream>
#include <stack>
using namespace std;
struct Node {
    int element;
    Node* next;
    Node(int val) : element(val), next(nullptr) {}
};
class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}
    void addToEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    stack<int> convertToStack() {
        Node* temp = head;
        stack<int> s;
        while (temp != nullptr) {
            // Only push ODD elements
            if (temp->element % 2 != 0) {
                s.push(temp->element);
            }
            temp = temp->next;
        }
        stack<int> t;
        while (!s.empty()) {
            t.push(s.top());
            s.pop();
        }
        return t;
    }
};

int main() {
    LinkedList list;
    list.addToEnd(12);
    list.addToEnd(99); 
    list.addToEnd(37); 
    list.addToEnd(45); 
    stack<int> result = list.convertToStack();
    cout << "Odd elements from Linked List (in order):" << endl;
    while (!result.empty()) {
        cout << result.top()<< endl;
        result.pop();
    }

    return 0;
}
