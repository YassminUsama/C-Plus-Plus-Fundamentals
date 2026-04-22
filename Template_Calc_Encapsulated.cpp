// Solution for Sec 2- Exercise 3: Advanced Template Calculator with Encapsulation
/* An improved version using Getters, Setters, and Default Constructors 
   alongside Operator Overloading for safer data management. */
#include <iostream>
using namespace std;
// Template class
template <class T>
class Calculator {
private:
T value;
public:
// Default constructor
Calculator() {
value = 0;
}
// Setter
void setValue(T v) {
value = v;
}
// Getter
T getValue() {
return value;
}
// Overload + operator
Calculator operator+(Calculator c) {
Calculator temp;
temp.value = value + c.value;
return temp;
}
};
int main(){
Calculator<int> c1;
Calculator<int> c2;
c1.setValue(7);
c2.setValue(8);
Calculator<int> result = c1 + c2;
cout << "Sum = " << result.getValue() << endl;
return 0;
}
