// Solution for Sec 2-Exercise 5: Operator Overloading in Structures (CarType)
/* Demonstrating both member and global operator functions for 
   arithmetic (+) and comparison (<) operations. */
#include <iostream>
#include <string>
using namespace std;
struct CarType {
string maker;
int year;
float price;
// Add prices of two cars (member function)
float operator+(CarType car) {
return price + car.price;
}
};
// Global operator function
// Allows comparison: int < CarType
bool operator<(int num, CarType car) {
if (num < car.price)
return true;
else
return false;
}
int main(){
    CarType car1, car2;
// Initialize car1
car1.maker = "Honda";
car1.year = 2021;
car1.price = 400000;
// Initialize car2
car2.maker = "Mercedes";
car2.year = 2023;
car2.price = 900000;
// Test + operator
float totalPrice = car1 + car2;
cout << "Total price = " << totalPrice << endl;
// Test global < operator
if (300000 < car1)
cout << "300000 is less than car1 price\n";
else
cout << "300000 is NOT less than car1 price\n";
return 0;
}
