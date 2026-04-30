// Solution for Sec 2 - Exercise: Dynamic Array Expansion (Resizing)
/* This program demonstrates advanced memory management by doubling the 
   array capacity when it becomes full. It involves creating a new larger 
   array, copying data, and safely deleting the old memory to prevent leaks. */
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
// expand array
int* temp = new int[size * 2];
for (int i = 0; i < size; i++)
{
temp[i] = ptr[i];
}
delete[] ptr;
cout << "Array expanded. Current elements:\n";
for (int i = 0; i < size ; i++)
{
cout <<  temp [i] << " ";
}
return 0;
}
