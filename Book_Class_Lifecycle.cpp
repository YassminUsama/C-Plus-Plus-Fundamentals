// Solution for Sec 4-Exercise: Book Class with Copy Constructor and Destructor
/* This program implements a 'Book' class to demonstrate Object-Oriented 
   programming lifecycle, including Default, Parameterized, and Copy 
   Constructors, as well as a Destructor for memory management. */
#include <iostream>
using namespace std;
class Book {
private:
string title;
float price;
public:
// Default constructor
Book() {
title = "Unknown";
price = 0;
}
// Parameterized constructor
Book(string t, float p) {
title = t;
price = p;
}
// Copy constructor
Book(const Book& b) {
title = b.title;
price = b.price;
cout << "Copy Constructor Called\n";
}
// Destructor
~Book() {
cout << "Destructor called for " << title << endl;
}
void display() const {
cout << "Title: " << title
<< ", Price: " << price << endl;
}};
int main() {
Book b1("C++ Programming", 500);
Book b2 = b1;   // Copy constructor
b1.display();
b2.display();
return 0;
}
