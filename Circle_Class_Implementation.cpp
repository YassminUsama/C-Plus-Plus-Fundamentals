// Solution for sec 1 - Exercise 2: circle class
/**/
#include <iostream>
using namespace std;
class Circle
{
public:
int radius;
const double pi = 3.14159;
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
Circle c; 
cout << "Please enter your radius: ";  
cin >> c.radius;
cout << "Area = " << c.getArea() << endl;
cout << "Diameter = " << c.getDiameter() << endl;
cout << "Circumference = " << c.getCircumference() << endl;
return 0;
}
