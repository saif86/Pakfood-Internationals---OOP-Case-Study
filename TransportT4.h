/**  Transport class
*
* #include "TransportT4.h" <BR>
* -llib
*
*/
#ifndef TRANSPORT_H
#define TRANSPORT_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;


// Transport class definition 
class Transport {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Transport(float = 0.0, const string& = "", float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Transport(const Transport&);
	// Transport& operator=(const Transport&);
	// ~Transport();

// OPERATIONS
	/** function that loads goods.
	*
	* @param void
	*
	* @return void
	*/
	void Load();

	/** function that unloads goods.
	*
	* @param void
	*
	* @return void
	*/
	void Unload();

	/** Pure virtual function that ships goods.
	* This makes Transport as an Abstract class
	*
	* @param void
	*
	* @return void
	*/
	virtual void Ship() = 0;


// ACCESS
	// setters
	void SetWeight(float = 0.0);
	void SetCapacity(const string& = "");
	void SetSpeed(float = 0.0);
	void SetTransport(float = 0.0, const string& = "", float = 0.0);
	/**
	# @overload void SetTransport(const Transport& aTransport);
	*/
	void SetTransport(const Transport& aTransport);

	// getters
	float GetWeight()const;
	const string& GetCapacity()const;
	float GetSpeed()const;
	const Transport& GetTransport()const;

private:
// DATA MEMBERS
	float mWeight;
	string mCapacity;
	float mSpeed;
};
// end class Transport

#endif
// _TRANSPORT_H_