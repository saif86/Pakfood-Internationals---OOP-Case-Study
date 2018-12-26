#include "Company.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Company Default+Overloaded Constructor
Company::Company(const string& aName, const string& aRegistrationNo) : mCompName(aName), mRegistrationNo(aRegistrationNo) {
	this->SetCompany(aName, aRegistrationNo);
	for (int i = 0; i < 50; i++) {
		this->mRooms[i] = NULL;
		this->mHalls[i] = NULL;
	}
		
}
// end Company constructor 

//============================= OPERATIONS ===================================
// function that prints profit report.
void Company::ProfitReport()const { }

// function that calculates financial statements.
void Company::FinancialStatement() { }

// function that prints rooms in the company.
void Company::PrintRooms() {
	for (int i = 0; i < Company::msNoOfRooms; i++) {
		cout << this->mRooms[i]->GetRoom();
	}
}


//============================= ACESS      ===================================

// function that sets name of the company
void Company::SetName(const string& aName) {
	this->mCompName = aName;
}
// end function SetName

// function that sets registration no. of the company
void Company::SetRegistrationNo(const string& aRegistrationNo) {
	this->mRegistrationNo = aRegistrationNo;
}
// end function SetRegistrationNo

// function that sets Rooms of Company
void Company::SetRoom(Room * aRoom) {
	this->mRooms[Company::sGetTotalRooms()] = aRoom;
	Company::msNoOfRooms++;
}
// end function SetRoom

// function that sets Halls of Company
void Company::SetHall(Hall * aHall) {
	this->mHalls[Company::sGetTotalHalls()] = aHall;
	Company::msNoOfHalls++;
}
// end function SetHall

// function that sets Company
void Company::SetCompany(const string& aName, const string& aRegistrationNo) {
	this->SetName(aName);
	this->SetRegistrationNo(aRegistrationNo);
}
// end function SetCompany

// Overloaded function that sets Company
void Company::SetCompany(const Company& aCompany) {
	this->SetCompany(aCompany.GetName(), aCompany.GetRegistrationNo());
}
// end function SetCompany

// function that gets name of the company
const string& Company::GetName() const {
	return this->mCompName;
}
// end function GetName

// function that gets registration no. of the company
const string& Company::GetRegistrationNo() const {
	return this->mRegistrationNo;
}
// end function GetRegistrationNo

// function that gets rooms of the company
Room * Company::GetRoom() const {
	return this->mRooms[0];
}
// end function GetRoom

// function that gets halls of the company
Hall * Company::GetHall() const {
	return this->mHalls[0];
}
// end function GetHall

// function that gets the Company
const Company& Company::GetCompany()const {
	return *this;
}
// end function GetCompany

// static function that gets the total no. of Rooms
int Company::sGetTotalRooms() {
	return Company::msNoOfRooms;
}
// end function sGetTotalRooms

// static function that gets the total no. of Rooms
int Company::sGetTotalHalls() {
	return Company::msNoOfHalls;
}
// end function sGetTotalHalls

/////////////////////////////// PRIVATE    ///////////////////////////////////

//============================= DATA MEMBERS      ============================

/*private static member cannot be accessed outside the class except for initialization*/
int Company::msNoOfRooms = 0;	// intitalize class variable 
int Company::msNoOfHalls = 0;	// intitalize class variable 
