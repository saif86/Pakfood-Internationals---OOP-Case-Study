/**  AirTransport class
*
* #include "AirTransportT3.h" <BR>
* -llib
*
*/
#ifndef AIR_TRANSPORT_H
#define AIR_TRANSPORT_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include "TransportT3.h"


// AirTransport class definition 
class AirTransport : public Transport {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	AirTransport(int = 0, int = 0, int = 0, const string& = "", const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// AirTransport(const AirTransport&);
	// AirTransport& operator=(const AirTransport&);
	// ~AirTransport();

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
	void SetAircraftType(const string&);
	void SetAircraftName(const string&);
	void SetAirTransport(int = 0, int = 0, int = 0, const string& = "", const string& = "");
	/**
	# @overload void SetAirTransport(const string& = "", const string& = "");
	*/
	void SetAirTransport(const string& = "", const string& = "");
	/**
	# @overload void SetAirTransport(const AirTransport& aAirTransport);
	*/
	void SetAirTransport(const AirTransport& aAirTransport);

	// getters
	int GetWeight()const;
	int GetCapacity()const;
	int GetSpeed()const;
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