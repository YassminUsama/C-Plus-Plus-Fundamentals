// Solution for Data Structures: Binary Search Tree (BST) Implementation
/* This program implements a BST with recursive insertion and demonstrates 
   the three depth-first traversal techniques: InOrder, PreOrder, and PostOrder.
   BST properties ensure O(log n) average time complexity for operations. */

#include <iostream>
using namespace std;
class Node{
public:
int element;
Node* left;
Node* right;
Node(int data){
element = data;
left = right = nullptr;
}
};
class BST{
public:
Node* root;
// constructor
BST(int val){
root = new Node(val);
}
Node* insert(int val, Node* current){
if(current == nullptr)
{return new Node(val);}
else if(val < current->element)
{current->left = insert(val, current->left);}
else
{current->right = insert(val, current->right);}
return current;
}
//Inorder
void InOrder(Node* current){
if(current != nullptr){
InOrder(current->left);
cout << current->element << " ";
InOrder(current->right);
}
}
// PreOrder
void PreOrder(Node* current){
if(current != nullptr){
cout << current->element << " ";
PreOrder(current->left);
PreOrder(current->right);
}
}
// PostOrder
void PostOrder(Node* current){
if(current != nullptr){
PostOrder(current->left);
PostOrder(current->right);
cout << current->element << " ";
}
}
};
// main function
int main(){
BST t(20);
t.insert(30, t.root);
t.insert(10, t.root);
t.insert(40, t.root);
t.insert(50, t.root);
t.insert(5, t.root);
t.insert(15, t.root);
cout << "InOrder: ";
t.InOrder(t.root);
cout << "\nPreOrder: ";
t.PreOrder(t.root);
cout << "\nPostOrder: ";
t.PostOrder(t.root);
return 0;
}
