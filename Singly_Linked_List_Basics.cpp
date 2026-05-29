// Solution for Data Structures - Singly Linked List Implementation
/* This program demonstrates the basics of Linked Lists, specifically 
   creating nodes dynamically and appending them to the end of the list. */
#include<iostream>
using namespace std;
struct node{
  int value=0;
  node *next;
};
class Linkedlist{
  public:
 node *head;
  Linkedlist(){
      head=NULL;
  }
  void insert(int data){
  node *newNode=new node;
  node *last;
  newNode->value=data;
  newNode->next=NULL;
  if(head==NULL){
      head=newNode;
      return;
  }
  last=head;
  while(last->next !=NULL){
      last=last->next;
  }
  last->next=newNode;
  }
  void display(){
      node *last;
      last=head;
      while(last !=NULL){
          cout<<last->value<<"-> ";
          last=last->next;
      }
      cout<<"NULL"<<endl;
  }
};
int main(){
Linkedlist list;
list.insert(10);
list.insert(20);
list.insert(30);
list.display(); 
return 0;
}
// outputs:10-> 20-> 30-> NULL
