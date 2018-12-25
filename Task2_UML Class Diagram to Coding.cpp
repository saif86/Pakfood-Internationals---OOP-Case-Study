/**
* @file Task2_UML_Class_Diagram_to_Coding.cpp
*
* @brief C++ Program to demostrate Room class.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;

// Room class definition
class Room {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Room(float = 0.0, float = 1.0);

// OPERATORS
	/** Stream Insertion operator.
	*
	* @param os Standard Output Stream.
	* @param from The value to be inserted to the output stream.
	*
	* @return A reference to the standard output stream.
	*/
	friend std::ostream& operator <<(std::ostream& os, const Room& from);

	/** Stream Extraction operator.
	*
	* @param is Standard Intput Stream.
	* @param to The value to be extracted from the input stream.
	*
	* @return A reference to the standard input stream.
	*/
	friend std::istream& operator >>(std::istream& is, Room& to);

	/** Addition operator.
	*
	* @param addend Constant reference of the addend room to be added.
	*
	* @return Sum of areas of 2 rooms.
	*/
	float operator +(const Room& addend)const;

// ACCESS
	// setters
	void SetWidth(float = 0.0);
	void SetLength(float = 0.0);
	void SetRoom(float = 0.0, float = 0.0);
	/**
	# @overload void SetRoom(const Room& aRoom);
	*/
	void SetRoom(const Room& aRoom);

	// getters
	float GetWidth() const;
	float GetLength() const;
	float GetArea() const;
	const Room& GetRoom()const;

private:

// DATA MEMBERS
	float mWidth;
	float mLength;
	float mArea;
};
// end class Room

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

/////////////////////////////// MAIN   ///////////////////////////////////////

// function main begins program execution
void main() {
	Room Room1, Room2;
	float TotalArea; 
	cout << "Enter Room 1 Measurement in feet : " << endl;
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
	
	system("pause");
}
// end main 
