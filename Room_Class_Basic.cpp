// Solution for Sec 1 - Exercise 5: Room Class Implementation
/* A program that uses a Class to calculate a room's area and volume
   based on: length=42.5, width=30.8, and height=19.2 dimensions.*/
#include <iostream> 
using namespace std; 
class Room { 
public: 
double length; 
double width; 
double height; 
double calculateArea() { 
return length * width; 
} 
double calculateVolume() { 
return length * width * height; 
} 
}; 
int main() { 
Room room; 
room.length = 42.5; 
room.width = 30.8; 
room.height = 19.2; 
double area = room.calculateArea(); 
double volume = room.calculateVolume(); 
cout << "Area of the room: " << area << endl; 
cout << "Volume of the room: " << volume << endl; 
return 0; 
}
