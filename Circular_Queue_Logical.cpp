// Solution for Sec6- Example: Circular Queue (Clear Logic Implementation)
/* This implementation uses explicit conditional logic to handle the display
   and wrap-around behavior. It's an excellent way to demonstrate 
   a deep understanding of array-based circular buffers. */
#include<iostream>
using namespace std;
#define size 5
class CircularQueue{
    private:
    int front,rear;
    int arr[size];
    public:
    CircularQueue(){
        front=-1;
        rear=-1;
    }
    bool isFull(){
        return((rear + 1) % size == front);
    }
    bool isEmpty(){
        return(front==-1);
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"Queue is full"<<endl;
        }
        else {
        if(isEmpty()){
            front=rear=0;
          arr[rear]=value;
          cout<<value<<" is enqueued"<<endl;
        }
        else{
            rear = (rear + 1) % size;
            arr[rear]=value;
          cout<<value<<" is enqueued"<<endl;
            }
        
        }
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
       else {
           cout<<arr[front]<<" is dequeue"<<endl;
         if(front==rear){
             front=rear=-1;
         }
         else{
             front = (front + 1) % size;
         }
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
        if(front<=rear){
           for(int i=front;i<=rear;i++){
               cout<<arr[i]<<"\t";
           } 
        }
        else{
                for(int i=front;i<size;i++){
                   cout<<arr[i]<<"\t";
                }
                for(int i=0;i<=rear;i++){
                     cout<<arr[i]<<"\t";
                }
            }
        }
    }
    void peek(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"peek= "<<arr[front]<<endl;
        }
    }
};
int main(){
CircularQueue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
cout<<"display 1:";
q.display();
cout<<endl;
q.dequeue();
q.dequeue();
cout<<"display 2:";
q.display();
cout<<endl;
q.enqueue(60);
q.enqueue(70);
cout<<"display 3:";
q.display();
cout<<endl;
return 0;
}
