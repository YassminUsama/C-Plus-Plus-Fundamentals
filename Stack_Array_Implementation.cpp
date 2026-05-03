// Solution for Sec6- Example: Stack Implementation using Array
/* This program demonstrates a Stack data structure based on the LIFO principle. 
   It includes core operations: Push (add), Pop (remove), Peek (view top), 
   and checking for Overflow/Underflow conditions. */
#include<iostream>
using namespace std;
#define size 5
class Stack{
  private:
  int top;
  int arr[size];
  public:
  Stack(){
      top=-1;
  }
  bool isEmpty(){
      return(top==-1);
    }
    bool isFull(){
        return (top==size-1);
    }
    void push(int value){
        if(isFull())
        {cout<<"Stack is overflow"<<endl;}
        else{
            top++;
            arr[top]=value;
            cout<<value<<" is pushed"<<endl;}
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack is underflow"<<endl;}
                else{
                    top--;
                }
            }
      void display(){
          if(isEmpty()){
              cout<<"Stack is underflow"<<endl;
          }
          else{
              for(int i=top;i>=0;i--)
              {
                  cout<<arr[i]<<endl;
              }
          }
      }
      void peek(){
          if(isEmpty()){
            cout<<"Stack is underflow"<<endl;  
          }
          else{
              cout<<arr[top];
          }
      }
    };
    int main(){
        Stack ob1;
        ob1.pop();
        ob1.push(7);
        ob1.push(9);
        ob1.push(8);
        ob1.push(4);
        cout<<"display 1: "<<endl;
        ob1.display();
        cout<<"peek= ";
        ob1.peek();
        ob1.pop();
        ob1.pop();
        ob1.pop();
        cout<<endl<<"display 2: "<<endl;
        ob1.display();
        ob1.peek();
        return 0;
    }
    
