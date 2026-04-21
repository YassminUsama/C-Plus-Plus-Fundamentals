// Solution for Sec 1 - Exercise 8: Rectangle Class (Encapsulated Version)
/* An improved version using private members and setter methods 
   to manage rectangle dimensions securely. */
#include <iostream> 
using namespace std;  
class Rectangle { 
private: 
double width; 
double height; 
public: 
void setDimensions(double w, double h) { 
width = w; 
height = h;   } 
double getArea() { 
return width * height; 
} 
double getPerimeter() { 
return 2 * (width + height); 
} 
double getWidth() { 
return width; 
} 
double getHeight() { 
return height; 
} 
}; 
int main() { 
Rectangle rect1, rect2; 
rect1.setDimensions(4, 40); 
rect2.setDimensions(3.5, 35.9); 
cout << "Rectangle 1 - Width: " << rect1.getWidth() << ", Height: " << rect1.getHeight() << endl;
cout << "Area: " << rect1.getArea() << ", Perimeter: " << rect1.getPerimeter() << endl;
cout<<endl;
cout << "Rectangle 2 - Width: " << rect2.getWidth() << ", Height: " << rect2.getHeight() << endl;
cout << "Area: " << rect2.getArea() << ", Perimeter: " << rect2.getPerimeter() << endl;
return 0; 
} 
