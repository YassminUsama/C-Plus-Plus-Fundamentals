// Solution for Data Structures: Converting Singly Linked List to Stack
/* This program demonstrates how to traverse a linked list and store 
   its elements into a Stack while maintaining the original order 
   using a temporary stack buffer. */
#include <iostream>
#include <stack>
using namespace std;
struct Node {
    int element;
    Node* next;
    Node(int val) : element(val), next(nullptr) {}
/*Node(int val){
element=val;
next=nullptr;
}
*/
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

        while (temp->next != nullptr)
           { temp = temp->next;}

        temp->next = newNode;
    }

    stack<int>convertToStack() {
        Node* temp= head;
        stack<int> s;

        while (temp != nullptr) {
          s.push(temp->element);

            temp= temp->next;
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

    while (!result.empty()) {
        cout << result.top() << endl;
        result.pop();
    }
    return 0;
}
