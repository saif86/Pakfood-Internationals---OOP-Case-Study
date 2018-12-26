/**  Room class 
*
* #include "Room.h" <BR>
* -llib
*
*/
#ifndef ROOM_H
#define ROOM_H

// SYSTEM INCLUDES
#include<iostream>


// Room class definition
class Room {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Room(float = 0.0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Room(const Room&);
	// Room& operator=(const Room&);
	// ~Room();

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

// OPERATIONS
	/** Function that stores item in the Room
	*
	* @param void
	*
	* @return void
	*/
	void Store();


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
#endif  
// _ROOM_H_
