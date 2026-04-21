// Solution for sec 1 - Exercise 1: Calculator Class
/*A program that uses a Class to perform 
addition, subtraction, and multiplication.*/
#include <iostream>
using namespace std;
class Calculator {
private:
int a, b;   // attributes
public:
// function to set values
void setValues(int x, int y) {
a = x;
b = y;
}
int add() {
return a + b;
}
int subtract() {
return a - b;
}
int multiply() {
return a * b;
}
};
int main() {
int x, y;
// ask user to enter two integers
cout << "Enter two integers: ";
cin >> x >> y;
// create object of Calculator class
Calculator calc;
calc.setValues(x, y);
// call methods and print results
cout << "Addition: " << calc.add() << endl;
cout << "Subtraction: " << calc.subtract() << endl;
cout << "Multiplication: " << calc.multiply() << endl;
return 0;
}
