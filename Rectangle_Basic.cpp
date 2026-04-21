// Solution for Sec 1 - Exercise 7: Rectangle Class (Basic Version)
/* A simple C++ program to calculate rectangle area and perimeter 
   using public data members. */
#include <iostream> 
using namespace std; 
class Rectangle { 
public: 
double width; 
double height; 
double getArea() { 
return width * height; 
} 
double getPerimeter() { 
return 2 * (width + height); 
} 
}; 
int main() { 
Rectangle rect1, rect2;
rect1.width = 4; 
rect1.height = 40;
rect2.width = 3.5; 
rect2.height = 35.9; 
cout << "Rectangle 1 - Width: " << rect1.width << ", Height: " << rect1.height << endl;
cout << "Area: " << rect1.getArea() << ", Perimeter: " << rect1.getPerimeter() << endl;
cout<<endl;
cout << "Rectangle 2 - Width: " << rect2.width << ", Height: " << rect2.height << endl;
cout << "Area: " << rect2.getArea() << ", Perimeter: " << rect2.getPerimeter() << endl; 
return 0; 
}
