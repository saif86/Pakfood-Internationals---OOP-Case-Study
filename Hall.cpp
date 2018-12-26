#include "Hall.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Hall Default+Overloaded Constructor
Hall::Hall(float aWidth, float aLength) : mWidth(aWidth), mLength(aLength), mArea(aWidth*aLength) {
	this->SetHall(aWidth, aLength);
}
// end Hall constructor 

//============================= OPERATORS ====================================

// Stream Insertion
ostream& operator <<(ostream& os, const Hall& r) {
	os << endl;

	os << "Width = " << r.GetWidth() << endl;
	os << "Length = " << r.GetLength() << endl;
	os << "Area = " << r.GetArea() << endl << endl;

	return os; // enables cout<<Hall1<<Hall2; 
}
// end stream insertion

// Stream Extraction
istream & operator >> (istream& in, Hall& r) {
	float aWidth, aLength;
	cout << endl;
	cout << "Width = ";
	in >> aWidth; // input Hall Width 

	cout << "Length = ";
	in >> aLength; // input Hall Length 
	cout << endl;

	r.SetHall(aWidth, aLength);

	return in; // enables cin>>Hall1>>Hall2; 
}
// end stream extraction


//============================= OPERATIONS ===================================
// function that Stores item in the Hall
void Hall::Store() { }


//============================= ACESS      ===================================

// function that sets width of Hall
void Hall::SetWidth(float aWidth) {
	if (aWidth < 0.0)
		cout << "Error: Cannot set a negative width." << endl;
	else {
		this->mWidth = aWidth;
		this->mArea = this->GetWidth()*this->GetLength();
	}
}
// end function SetWidth

// function that sets length of Hall
void Hall::SetLength(float aLength) {
	if (aLength < 0.0)
		cout << "Error: Cannot set a negative length." << endl;
	else {
		this->mLength = aLength;
		this->mArea = this->GetWidth()*this->GetLength();
	}
}
// end function SetLength

// function that sets Hall
void Hall::SetHall(float aWidth, float aLength) {
	this->SetWidth(aWidth);
	this->SetLength(aLength);
}
// end function SetHall

// Overloaded function that sets Hall
void Hall::SetHall(const Hall& aHall) {
	this->SetHall(aHall.GetWidth(), aHall.GetLength());
}
// end function SetHall

// function that gets the width of Hall
float Hall::GetWidth() const {
	return (this->mWidth);
}
// end function GetWidth

// function that gets the length of Hall
float Hall::GetLength() const {
	return (this->mLength);
}
// end function GetLength

// function that gets the Area of Hall
float Hall::GetArea() const {
	return (this->mArea);
}
// end function GetArea

// function that gets the Hall
const Hall& Hall::GetHall()const {
	return *this;
}
// end function GetHall
