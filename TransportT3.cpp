#include "TransportT3.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Transport Default+Overloaded Constructor
Transport::Transport(int aWeight, int aCapacity, int aSpeed) : mWeight(aWeight), mCapacity(aCapacity), mSpeed(aSpeed) {
	this->SetTransport(aWeight, aCapacity, aSpeed);
}
// end Transport constructor 

//============================= OPERATIONS ===================================
// function that carries goods
void Transport::CarryGoods() { }


//============================= ACESS      ===================================

// function that sets Weight
void Transport::SetWeight(int aWeight) {
	if (aWeight < 0)
		cout << "Error: Cannot set a negative weight." << endl;
	else
		mWeight = aWeight;
}
// end function SetWeight

// function that sets Capacity
void Transport::SetCapacity(int aCapacity) {
	if (aCapacity < 0)
		cout << "Error: Cannot set a negative capacity." << endl;
	else
		mCapacity = aCapacity;
}
// end function SetCapacity

// function that sets Speed
void Transport::SetSpeed(int aSpeed) {
	if (aSpeed < 0)
		cout << "Error: Cannot set a negative speed." << endl;
	else
		mSpeed = aSpeed;
}
// end function SetSpeed

// function that sets Transport
void Transport::SetTransport(int aWeight, int aCapacity, int aSpeed) {
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
int Transport::GetWeight() const {
	return this->mWeight;
}
// end function GetWeight

// function that gets Capacity
int Transport::GetCapacity() const {
	return this->mCapacity;
}
// end function GetCapacity

// function that gets Speed
int Transport::GetSpeed() const {
	return this->mSpeed;
}
// end function GetSpeed

// function that gets the Transport
const Transport& Transport::GetTransport()const {
	return *this;
}
// end function GetTransport