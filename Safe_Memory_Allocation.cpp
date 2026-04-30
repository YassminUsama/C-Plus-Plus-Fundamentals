// Solution for Sec 3 - Exercise: Handling Memory Allocation Failure
/* This program demonstrates robust memory management using try-catch blocks. 
   It attempts to allocate a massive array and catches the 'bad_alloc' exception 
   if the system runs out of memory, preventing the program from crashing. */
#include <iostream>
#include <new>
using namespace std;
int main()
{
try
{
int* arr = new int[1000000000];
cout << "Memory allocated successfully\n";
delete[] arr;
}
catch (bad_alloc& e)
{
cout << "Memory allocation failed\n";
}
return 0;
}
