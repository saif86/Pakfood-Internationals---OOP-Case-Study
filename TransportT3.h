/**  Transport class
*
* #include "TransportT3.h" <BR>
* -llib
*
*/
#ifndef TRANSPORT_H
#define TRANSPORT_H

// SYSTEM INCLUDES
#include<iostream>


// Transport class definition 
class Transport {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Transport(int = 0, int = 0, int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Transport(const Transport&);
	// Transport& operator=(const Transport&);
	// ~Transport();

// OPERATIONS
	/** function that carries goods.
	*
	* @param void
	*
	* @return void
	*/
	void CarryGoods();


// ACCESS
	// setters
	void SetWeight(int = 0);
	void SetCapacity(int = 0);
	void SetSpeed(int = 0);
	void SetTransport(int = 0, int = 0, int = 0);
	/**
	# @overload void SetTransport(const Transport& aTransport);
	*/
	void SetTransport(const Transport& aTransport);

	// getters
	int GetWeight()const;
	int GetCapacity()const;
	int GetSpeed()const;
	const Transport& GetTransport()const;

private:
// DATA MEMBERS
	int mWeight;
	int mCapacity;
	int mSpeed;
};
// end class Transport

#endif
// _TRANSPORT_H_