#include "TransportT4.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Transport Default+Overloaded Constructor
Transport::Transport(float aWeight, const string& aCapacity, float aSpeed) : mWeight(aWeight), mCapacity(aCapacity), mSpeed(aSpeed) {
	this->SetTransport(aWeight, aCapacity, aSpeed);
}
// end Transport constructor 

//============================= OPERATIONS ===================================
// function that loads goods
void Transport::Load() { 
	cout << "Goods are loaded successfully" << endl;
}
// end function Load

// function that unloads goods
void Transport::Unload() {
	cout << "Goods are unloaded successfully" << endl;
}
// end function Unload

//============================= ACESS      ===================================

// function that sets Weight
void Transport::SetWeight(float aWeight) {
	if (aWeight < 0.0)
		cout << "Error: Cannot set a negative weight." << endl;
	else
		this->mWeight = aWeight;
}
// end function SetWeight

// function that sets Capacity
void Transport::SetCapacity(const string& aCapacity) {
	this->mCapacity = aCapacity;
}
// end function SetCapacity

// function that sets Speed
void Transport::SetSpeed(float aSpeed) {
	if (aSpeed < 0.0)
		cout << "Error: Cannot set a negative speed." << endl;
	else
		this->mSpeed = aSpeed;
}
// end function SetSpeed

// function that sets Transport
void Transport::SetTransport(float aWeight, const string& aCapacity, float aSpeed) {
	this->SetWeight(aWeight);
	this->SetCapacity(aCapacity);
	this->SetSpeed(aSpeed);
}
// end function SetTransport

// Overloaded function that sets Transport
void Transport::SetTransport(const Transport& aTransport){
	this->SetTransport(aTransport.GetWeight(), aTransport.GetCapacity(), aTransport.GetSpeed());
}
// end function SetTransport

// function that gets Weight
float Transport::GetWeight() const {
	return this->mWeight;
}
// end function GetWeight

// function that gets Capacity
const string& Transport::GetCapacity() const {
	return this->mCapacity;
}
// end function GetCapacity

// function that gets Speed
float Transport::GetSpeed() const {
	return this->mSpeed;
}
// end function GetSpeed

// function that gets the Transport
const Transport& Transport::GetTransport()const {
	return *this;
}
// end function GetTransport