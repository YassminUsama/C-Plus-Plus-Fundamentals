// Solution for Sec 3 - Exercise: Dynamic Array using Pointers
/* A program that demonstrates dynamic memory allocation on the Heap, 
   handling user input for an array, and performing manual memory deallocation 
   to ensure efficiency and prevent memory leaks. */
#include <iostream>
using namespace std;
int main()
{
int* arr;
arr = new int[5];
cout << "Enter 5 numbers:" << endl;
for (int i = 0; i < 5; i++)
{
cin >> arr[i];
}
cout << "The numbers are:" << endl;
for (int i = 0; i < 5; i++)
{
cout << arr[i] << " ";
}
delete[] arr;
return 0;
}
