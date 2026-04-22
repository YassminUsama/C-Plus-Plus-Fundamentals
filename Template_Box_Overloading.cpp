// Solution for Sec 2 - Exercise 4: Template Class Box with Operator Overloading (>)
/* Demonstrating how to overload relational operators to compare 
   a template class object with a literal value. */
#include <iostream>
using namespace std;
// Template class
template <class T>
class Box {
private:
T value;
public:
// Constructor
Box(T v) {
value = v;
}
// Overload > operator
bool operator>(T num) {
return value > num;
}
};
int main() {
Box<float> b(5.5);
if (b > 3.2)
cout << "Greater" << endl;
else
cout << "Not Greater" << endl;
return 0;
}
