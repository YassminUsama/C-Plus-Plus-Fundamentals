// Solution for Sec 4- Exercise: Rectangle Class with Const Objects
/* This program demonstrates the use of 'const' with member functions and objects.
   It shows that 'const' objects can only call 'const' member functions to 
   ensure data integrity. */
#include <iostream>
using namespace std;
class Rectangle {
private:
float length;
float width;
public:
Rectangle(float l, float w) {
length = l;
width = w;
}
void setLength(float l) {
length = l;
}
float getArea() const {
return length * width;
}
};
int main() {
const Rectangle r(5, 4);
cout << "Area: " << r.getArea() << endl;
// r.setLength(10); Error: cannot modify const object
return 0;
}
