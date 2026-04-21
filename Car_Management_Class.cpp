// Solution for sec 1 - Exercise 4: 
/* A program that defines a Car class to manage vehicle data,
   calculate maintenance schedules, and compare car objects.*/
#include <iostream>
#include <string>
using namespace std;
class Car
{
string make;
string model;
double topSpeed;
int year;
public:
void initialize(string m, string mod, double speed, int y)
{
make = m;
model = mod;
topSpeed = speed;
year = y;
}
void display()
{
cout << "make= " << make << ", model= " << model;
cout << ", speed= " << topSpeed << ", year= " << year << endl;
}
bool needsMaintenance(int currentYear)
{
return ((currentYear- year) % 5 == 0);
}
bool isEqual(Car c1)
{
return ((make == c1.make) &&
(model == c1.model) &&
(topSpeed == c1.topSpeed) &&
(year == c1.year));
}
};
int main()
{
Car c1;
c1.initialize("Toyota", "Camry", 180, 2013);
Car c2;
c2.initialize("Honda", "Civic", 200, 2015);
c1.display();
cout << endl;
c2.display();
if (c1.needsMaintenance(2025)) {
cout << "Car1 needs Maintenance" << endl;
} else {
cout << "Car1 doesn't need Maintenance" << endl;
}
if (c2.needsMaintenance(2025)) {
cout << "Car2 needs Maintenance" << endl;
} else {
cout << "Car2 doesn't need Maintenance" << endl;
}
if (c1.isEqual(c2)) {
cout << "Car1 and Car2 are equal" << endl;
} else {
cout << "Car1 and Car2 are not equal" << endl;
}
return 0;
}
