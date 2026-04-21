// Solution for Sec 1 - Exercise 6: Room Class (Encapsulation Version)
/* An improved version of the Room class that uses private data members 
   and public methods to ensure data security and encapsulation. */
#include <iostream> 
using namespace std; 
class Room { 
private: 
double length; 
double width; 
double height; 
public: 
void setDimensions (double len, double wid, double hgt) { 
length = len; 
width = wid; 
height = hgt; 
} 
double calculateArea() { 
return length * width; 
} 
double calculateVolume() { 
return length * width * height; 
} 
};
int main() { 
Room room;  
room. setDimensions (42.5, 30.8, 19.2); 
double area = room.calculateArea(); 
double volume = room.calculateVolume(); 
cout << "Area of the room: " << area << endl; 
cout << "Volume of the room: " << volume << endl; 
return 0; 
}
