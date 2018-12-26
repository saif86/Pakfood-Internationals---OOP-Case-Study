/**  AirTransport class
*
* #include "AirTransportT4.h" <BR>
* -llib
*
*/
#ifndef AIR_TRANSPORT_H
#define AIR_TRANSPORT_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include "TransportT4.h"


// AirTransport class definition 
class AirTransport : public Transport {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	AirTransport(float = 0.0, const string& = "", float = 0.0, const string& = "", const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// AirTransport(const AirTransport&);
	// AirTransport& operator=(const AirTransport&);
	// ~AirTransport();

// OPERATIONS
	/** Pure virtual function that ships goods.
	*
	* @param void
	*
	* @return void
	*/
	void Ship();

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
	void SetAircraftType(const string&);
	void SetAircraftName(const string&);
	void SetAirTransport(float = 0.0, const string& = "", float = 0.0, const string& = "", const string& = "");
	/**
	# @overload void SetAirTransport(const string& = "", const string& = "");
	*/
	void SetAirTransport(const string& = "", const string& = "");
	/**
	# @overload void SetAirTransport(const AirTransport& aAirTransport);
	*/
	void SetAirTransport(const AirTransport& aAirTransport);

	// getters
	float GetWeight()const;
	const string& GetCapacity()const;
	float GetSpeed()const;
	const Transport& GetTransport()const;
	const string& GetAircraftType()const;
	const string& GetAircraftName()const;
	const AirTransport& GetAirTransport()const;

private:
// DATA MEMBERS
	string mAircraftType;
	string mAircraftName;
};
// end class AirTransport

#endif
// _AIR_TRANSPORT_H_