// Solution for Sec 1 - Exercise 11: Book Structure (User Input)
/* A program that utilizes a structure to store book details,
   demonstrating user input handling for strings and numeric data. */
#include <iostream> 
#include <string> 
using namespace std; 
struct Book 
{ 
string title; 
string author; 
int year; 
float price; 
}; 
int main() 
{ 
Book b1; 
cout << "Enter Book Title: "; 
getline(cin, b1.title); 
cout << "Enter Author Name: "; 
getline(cin, b1. author); 
cout << "Enter Publication Year: "; 
cin >> b1.year; 
cout << "Enter Price: "; 
cin >> b1.price; 
cout << "\t Displaying Information:" << endl; 
cout << "Title: " << b1.title << endl; 
cout << "Author: " << b1.author << endl; 
cout << "Publication Year: " << b1.year << endl; 
cout << "Price: " << b1.price << endl; 
return 0; 
} 
