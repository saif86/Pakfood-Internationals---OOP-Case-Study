/**  LandTransport class
*
* #include "LandTransportT4.h" <BR>
* -llib
*
*/
#ifndef LAND_TRANSPORT_H
#define LAND_TRANSPORT_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include "TransportT4.h"


// LandTransport class definition 
class LandTransport : public Transport {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	LandTransport(float = 0.0, const string& = "", float = 0.0, const string& = "", const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// LandTransport(const LandTransport&);
	// LandTransport& operator=(const LandTransport&);
	// ~LandTransport();

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
	void SetTransport(float = 0.0, const string& = 0, float = 0.0);
	/**
	# @overload void SetTransport(const Transport& aTransport);
	*/
	void SetTransport(const Transport& aTransport);
	void SetTransportationMode(const string&);
	void SetVehicleType(const string&);
	void SetLandTransport(float = 0.0, const string& = 0, float = 0.0, const string& = "", const string& = "");
	/**
	# @overload void SetLandTransport(const string& = "", const string& = "");
	*/
	void SetLandTransport(const string& = "", const string& = "");
	/**
	# @overload void SetLandTransport(const LandTransport& aLandTransport);
	*/
	void SetLandTransport(const LandTransport& aLandTransport);

	// getters
	float GetWeight()const;
	const string& GetCapacity()const;
	float GetSpeed()const;
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