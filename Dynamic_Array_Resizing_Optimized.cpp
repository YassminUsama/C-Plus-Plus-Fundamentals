// Solution for Sec 3 - Exercise: Dynamic Array Expansion (Best Practice)
/* This program demonstrates array resizing by creating a new larger array, 
   copying data, and reassigning the original pointer to the new memory address. 
   This ensures the program can continue using the same pointer name. */
#include <iostream>
using namespace std;
int main()
{
int size = 4;
int* ptr = new int[size];
cout << "Enter 4 numbers:\n";
for (int i = 0; i < size; i++)
{
cin >> ptr[i];
}
// Expand the array
int* temp = new int[size * 2];
for (int i = 0; i < size; i++)
{
temp[i] = ptr[i];
}
delete[] ptr;
ptr = temp;
size = size * 2;
cout << "Enter " << size / 2 << " more numbers:\n";
for (int i = size / 2; i < size; i++)
{
cin >> ptr[i];
}
cout << "All elements:\n";
for (int i = 0; i < size; i++)
{
cout << ptr[i] << " ";
}
delete[] ptr;
return 0;
}
