#include "Room.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Room Default+Overloaded Constructor
Room::Room(float aWidth, float aLength) : mWidth(aWidth), mLength(aLength), mArea(aWidth*aLength) {
	this->SetRoom(aWidth, aLength);
}
// end Room constructor 

//============================= OPERATORS ====================================

// Stream Insertion
ostream& operator <<(ostream& os, const Room& r) {
	os << endl;

	os << "Width = " << r.GetWidth() << endl;
	os << "Length = " << r.GetLength() << endl;
	os << "Area = " << r.GetArea() << endl << endl;

	return os; // enables cout<<Room1<<Room2; 
}
// end stream insertion

// Stream Extraction
istream & operator >> (istream& in, Room& r) {
	float aWidth, aLength;
	cout << endl;
	cout << "Width = ";
	in >> aWidth; // input room Width 

	cout << "Length = ";
	in >> aLength; // input room Length 
	cout << endl;

	r.SetRoom(aWidth, aLength);

	return in; // enables cin>>Room1>>Room2; 
}
// end stream extraction

// Binary Addition operator 
float Room::operator +(const Room& addend)const {
	return this->GetArea() + addend.GetArea();
}
// end Binary Addition


//============================= OPERATIONS ===================================
// function that Stores item in the Room
void Room::Store() { }


//============================= ACESS      ===================================

// function that sets width of Room
void Room::SetWidth(float aWidth) {
	if (aWidth < 0.0)
		cout << "Error: Cannot set a negative width." << endl;
	else {
		this->mWidth = aWidth;
		this->mArea = this->GetWidth()*this->GetLength();
	}
}
// end function SetWidth

// function that sets length of Room
void Room::SetLength(float aLength) {
	if (aLength < 0.0)
		cout << "Error: Cannot set a negative length." << endl;
	else {
		this->mLength = aLength;
		this->mArea = this->GetWidth()*this->GetLength();
	}
}
// end function SetLength

// function that sets Room
void Room::SetRoom(float aWidth, float aLength) {
	this->SetWidth(aWidth);
	this->SetLength(aLength);
}
// end function SetRoom

// Overloaded function that sets Room
void Room::SetRoom(const Room& aRoom) {
	this->SetRoom(aRoom.GetWidth(), aRoom.GetLength());
}
// end function SetRoom

// function that gets the width of Room
float Room::GetWidth() const {
	return (this->mWidth);
}
// end function GetWidth

// function that gets the length of Room
float Room::GetLength() const {
	return (this->mLength);
}
// end function GetLength

// function that gets the Area of Room
float Room::GetArea() const {
	return (this->mArea);
}
// end function GetArea

// function that gets the Room
const Room& Room::GetRoom()const {
	return *this;
}
// end function GetRoom
