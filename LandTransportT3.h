/**  LandTransport class
*
* #include "LandTransportT3.h" <BR>
* -llib
*
*/
#ifndef LAND_TRANSPORT_H
#define LAND_TRANSPORT_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include "TransportT3.h"


// LandTransport class definition 
class LandTransport : public Transport {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	LandTransport(int = 0, int = 0, int = 0, const string& = "", const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// LandTransport(const LandTransport&);
	// LandTransport& operator=(const LandTransport&);
	// ~LandTransport();

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
	void SetTransportationMode(const string&);
	void SetVehicleType(const string&);
	void SetLandTransport(int = 0, int = 0, int = 0, const string& = "", const string& = "");
	/**
	# @overload void SetLandTransport(const string& = "", const string& = "");
	*/
	void SetLandTransport(const string& = "", const string& = "");
	/**
	# @overload void SetLandTransport(const LandTransport& aLandTransport);
	*/
	void SetLandTransport(const LandTransport& aLandTransport);

	// getters
	int GetWeight()const;
	int GetCapacity()const;
	int GetSpeed()const;
	const Transport& GetTransport()const;
	const string& GetTransportationMode()const;
	const string& GetVehicleType()const;
	const LandTransport& GetLandTransport()const;

private:
	// DATA MEMBERS
	string mTransportationMode;
	string mVehicleType;
};
// end class LandTransport

#endif
// _LAND_TRANSPORT_H_