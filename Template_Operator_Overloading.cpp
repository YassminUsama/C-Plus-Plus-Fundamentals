// Solution for Sec 2 - Exercise 2: Template Class with Operator Overloading
/* A program that combines Class Templates and Operator Overloading (+) 
   to perform mathematical operations on Objects. */
#include <iostream>
using namespace std;
// Template class
template <class T>
class Calculator {
private:
T value;
public:
// Constructor
Calculator(T v) {
value = v;
}
// Overload + operator
Calculator operator+(Calculator c) {
return value + c.value;
}
// Display function
void display() {
cout << "Sum = " << value << endl;
}
};
int main() {
Calculator<int> c1(7);
Calculator<int> c2(8);
Calculator<int> result = c1 + c2;
result.display();
return 0;
}
