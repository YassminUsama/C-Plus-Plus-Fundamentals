// Solution for Sec 1 - Exercise 10: Person Structure (Dynamic User Input)
/* A program that uses getline and cin to take user input for a structure, 
   handling names with spaces correctly. */
#include <iostream> 
#include <string> 
using namespace std; 
struct Person 
{ 
string name; 
int age; 
float salary; 
}; 
int main() 
{ 
Person p1; 
cout << "Enter Your Name: "; 
getline(cin, p1. name); 
cout << "Enter Your Age: "; 
cin >> p1.age; 
cout << "Enter Your Salary: "; 
cin >> p1.salary; 
cout << "Displaying Information:" << endl; 
cout << "Name: " << p1.name << endl; 
cout << "Age: " << p1.age << endl; 
cout << "Salary: " << p1.salary << endl; 
return 0; 
}
