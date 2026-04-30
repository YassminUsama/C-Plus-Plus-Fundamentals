// Solution for Sec 3 - Exercise: Dynamic Array with User-Defined Size
/* This program allows the user to specify the number of elements at runtime, 
   demonstrating flexible memory allocation and accumulation logic (summing) 
   within a dynamic array structure. */
#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter number of elements: ";
cin >> n;
int* arr = new int[n];
int sum = 0;
cout << "Enter the elements:" << endl;
for (int i = 0; i < n; i++)
{
cin >> arr[i];
sum += arr[i];
}
cout << "Sum = " << sum << endl;
delete[] arr;
return 0;
}
