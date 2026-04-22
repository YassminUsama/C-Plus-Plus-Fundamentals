// Solution for Sec 2- Exercise 6: Template Struct with Global & Member Operator Overloading
/* A comprehensive example demonstrating how to compare objects and 
   perform arithmetic between primitive types and template objects. */
#include <iostream>
using namespace std;
// Template struct
template <class T>
struct Product {
T price;
// Constructor
Product(T p) {
price = p;
}
// Overload > to compare two products
bool operator>(Product p) {
return price > p.price;
}
};
// Global operator + (float + Product)
template <class T>
float operator+(float total, Product<T> p) {
return total + p.price;
}
int main() {
float total = 0;
Product<float> p1(300);
Product<float> p2(450);
// Compare products
if (p1 > p2) {
total = total + p2;
}
else {
total = total + p1;
}
cout << "Cheaper product added." << endl;
cout << "Total = " << total << endl;
return 0;
}
