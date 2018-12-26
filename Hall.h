/**  Hall class
*
* #include "Hall.h" <BR>
* -llib
*
*/
#ifndef HALL_H
#define HALL_H

// SYSTEM INCLUDES
#include<iostream>


// Hall class definition
class Hall {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Hall(float = 0.0, float = 1.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Hall(const Hall&);
	// Hall& operator=(const Hall&);
	// ~Hall();

// OPERATORS
	/** Stream Insertion operator.
	*
	* @param os Standard Output Stream.
	* @param from The value to be inserted to the output stream.
	*
	* @return A reference to the standard output stream.
	*/
	friend std::ostream& operator <<(std::ostream& os, const Hall& from);

	/** Stream Extraction operator.
	*
	* @param is Standard Intput Stream.
	* @param to The value to be extracted from the input stream.
	*
	* @return A reference to the standard input stream.
	*/
	friend std::istream& operator >>(std::istream& is, Hall& to);


// OPERATIONS
	/** Function that stores item in the Hall
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
	void SetHall(float = 0.0, float = 0.0);
	/**
	# @overload void SetHall(const Hall& aHall);
	*/
	void SetHall(const Hall& aHall);

	// getters
	float GetWidth() const;
	float GetLength() const;
	float GetArea() const;
	const Hall& GetHall()const;

private:

// DATA MEMBERS
	float mWidth;
	float mLength;
	float mArea;
};
// end class Hall
#endif  
// _HALL_H_
