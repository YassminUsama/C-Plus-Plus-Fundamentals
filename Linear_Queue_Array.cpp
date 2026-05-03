// Solution for Sec6- Example: Linear Queue Implementation
/* This program implements a Linear Queue using an array. 
   It demonstrates the FIFO (First In, First Out) principle and handles 
   empty/full states using front and rear pointers. */
#include<iostream>
using namespace std;
#define size 5
class Queue{
    private:
    int front;
    int rear;
    int arr[size];
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
  void enqueue(int value){
      if(rear==size-1)
      {cout<<"Queue is full"<<endl;}
      else{
          if(front==-1){
          front=0;}
          rear++;
          arr[rear]=value;
        cout<<value<<"is enqueued"<<endl;
      }
      }
      void dequeue(){
          if((front==-1)||(front>rear)){
              cout<<"Queue is empty"<<endl;
          }
          else{
              cout<<arr[front]<<"is dequeued"<<endl;
              front++;
              
          }
      }
      void display(){
          if((front==-1)||(front>rear)){
              cout<<"Queue is empty"<<endl;
          }
          else{
              for(int i=front;i<=rear;i++){
                  cout<<arr[i]<<endl;
              }
          }
      }
      void peek(){
          if((front==-1)||(front>rear)){
              cout<<"Queue is empty"<<endl;
          }
          else{
              cout<<"peek= "<<arr[front]<<endl;
          }
      }
};
int main()
{
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
cout<<"display 1:"<<endl;
q.display();
q.dequeue();
cout<<"display 2:"<<endl;
q.display();
q.peek();
q.enqueue(40);
q.enqueue(50);
q.enqueue(60);
q.peek();
cout<<"display 3:"<<endl;
q.display();
return 0;
    
}
