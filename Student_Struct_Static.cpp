// Solution for Sec 1 - Exercise 9: Student Structure (Static)
/* A program demonstrating how to assign values directly to a structure's members. */
#include <iostream> 
#include <string> 
using namespace std; 
struct Student 
{ 
int rollNo; 
string name; 
int age; 
float mark; 
}; 
int main() 
{ 
Student s1; 
s1.rollNo = 102; 
s1.name = "Yassmin Usama"; 
s1.age = 22; 
s1.mark = 95.7; 
cout << "Displaying Student Information:" << endl; 
cout << "Roll Number: " << s1.rollNo << endl; 
cout << "Name: " << s1.name << endl; 
cout << "Age: " << s1.age << endl; 
cout << "Mark: " << s1.mark << endl; 
return 0; 
}
