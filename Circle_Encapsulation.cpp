// Solution for sec 1 - Exercise 3: circle class after add set and get radius:
/*A program that uses a Class to calculate a circle's 
   area, diameter, and circumference based on user input.*/
#include <iostream>
using namespace std;
class Circle
{
int radius;
const double pi = 3.14;
public:
void setRadius(int r)
{
radius = r;
}
int getRadius()
{
return radius;
}
double getArea()
{
return pi * radius * radius;
}
int getDiameter()
{
return radius * 2;
}
double getCircumference()
{
return 2 * pi * radius;
}
};
int main()
{
int r;
cout << "Please enter your radius: ";
cin >> r;
Circle c;
c.setRadius(r);   // changed here (instead of c.radius = r)
cout << "Radius = " << c.getRadius() << endl;
cout << "Area = " << c.getArea() << endl;
cout << "Diameter = " << c.getDiameter() << endl;
cout << "Circumference = " << c.getCircumference() << endl;
return 0;
}
