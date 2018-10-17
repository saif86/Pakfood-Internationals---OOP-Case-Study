// Task-2 Room.cpp \
// Room code 
#include<iostream> // include input/output stream library 

using namespace std; // Program uses cout, cin, endl 
					 
// Room class definition 
class Room{ 
	float Width; 
	float Length; 
	float Area; 
public: 
	Room(float = 0.0, float = 1.0); // default + overloaded constructor 
	float getArea()const; // returns the Area of the room 
	friend istream & operator >>(istream &, Room &); 
	friend ostream & operator <<(ostream &,const Room &); 
	float operator + (const Room &)const; 
}; // end class Room 
   
// File scope starts here 
   
// Room constructor initializes all data members 
// to user-supplied data using member initializer list 
Room::Room(float aWidth, float aLength) :Width(aWidth), Length(aLength){ 
	Area = Width*Length; // calculate room Area 
} // end constructor Room 
  
  // get Room Area value 
float Room::getArea()const{ 
	return Area; 
} // end function getArea 
  
// overload binary plus (+) operator 
float Room::operator +(const Room & r)const{ 
	return Area + r.Area; 
} // end function operator + 
  
// function main begins program execution 
void main() { 
	Room Room1,Room2; 
	float TotalArea; cout << "Enter Room 1 Measurement in feet : " << endl; 
	cin >> Room1; 
	cout << "Enter Room 2 Measurement in feet : " << endl; 
	cin >> Room2; 
	
	TotalArea = Room1 + Room2; 
	
	cout << "========== Room 1 Detail ==========" << endl; 
	cout << Room1; 
	cout << "========== Room 2 Detail ==========" << endl; 
	cout << Room2; 
	cout << endl;
	
	cout << "Total Area to accommodate order = " << TotalArea << " Sq feet" << endl; 
	cout << endl; 
	
	system("pause"); // To pause the console 
}// end function main 
 
 // overloaded stream-extraction operator; cannot be 
 // a member function if we would like to invoke it with 
 // cin >> anyRoom; 
istream & operator >> (istream & in, Room & r){ 
	cout << endl; 
	cout << "Width = "; 
	in >> r.Width; // input room Width 
	
	cout << "Length = "; 
	in >> r.Length; // input room Length 
	cout << endl; 
	
	r.Area = r.Width*r.Length; // calculate room Area 
	
	return in; // enables cin>>Room1>>Room2; 
} // end function operator>> 
  
  // overloaded stream-insertion operator; cannot be 
  // a member function if we would like to invoke it with 
  // cout << anyRoom; 
ostream & operator << (ostream & os, const Room & r){ 
	os << endl; 
	
	os << "Width = " << r.Width << endl; 
	os << "Length = " << r.Length << endl; 
	os << "Area = " << r.Area << endl << endl; 
	
	return os; // enables cout<<Room1<<Room2; 
} // end function operator<<