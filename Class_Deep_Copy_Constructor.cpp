// Solution for Sec 4- Exercise: Class Test with Deep Copy Constructor
/* This program demonstrates 'Deep Copy' logic. By allocating new memory 
   in the copy constructor, we ensure that each object has its own separate 
   data in the Heap, preventing 'Double Free' errors during destruction. */
#include <iostream>
using namespace std;
class Test {
private:
int* data;
public:
// Constructor
Test(int value) {
data = new int;
*data = value;
}
// Deep Copy Constructor
Test(const Test& t) {
data = new int;
*data = *(t.data);
cout << "Deep Copy Constructor Called\n";
}
// Destructor
~Test() {
delete data;
cout << "Memory Freed\n";
}
void display() const {
cout << "Value: " << *data << endl;
}
};
int main() {
Test t1(10);
Test t2 = t1;
t1.display();
t2.display();
return 0;
}
