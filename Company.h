/**  Company class
*
* #include "Company.h" <BR>
* -llib
*
*/
#ifndef COMPANY_H
#define COMPANY_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;

// LOCAL INCLUDES
#include"Room.h"
#include"Hall.h"


// Company class definition 
class Company {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Company(const string& = "", const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Company(const Company&);
	// Company& operator=(const Company&);
	// ~Company();

// OPERATIONS
	/** function that prints profit report.
	*
	* @param void
	*
	* @return void
	*/
	void ProfitReport()const;

	/** function that calculates financial statements.
	*
	* @param void
	*
	* @return void
	*/
	void FinancialStatement();

	/** function that prints rooms in the company.
	*
	* @param void
	*
	* @return void
	*/
	void PrintRooms();

// ACCESS
	// setters
	void SetName(const string& = "");
	void SetRegistrationNo(const string& = "");
	void SetRoom(Room *);
	void SetHall(Hall *);
	void SetCompany(const string& = "", const string& = "");
	/**
	# @overload void SetCompany(const Company& aCompany);
	*/
	void SetCompany(const Company& aCompany);
	
	// getters
	const string& GetName()const;
	const string& GetRegistrationNo()const;
	Room * GetRoom()const;
	Hall * GetHall()const;
	const Company& GetCompany()const;
	static int sGetTotalRooms();
	static int sGetTotalHalls();
	
private:
// DATA MEMBERS
	string mCompName;
	string mRegistrationNo;
	Room * mRooms[50];
	Hall * mHalls[50];
	// class variables to count total no. of rooms/halls hired
	static int msNoOfRooms;
	static int msNoOfHalls;
};
// end class Company

#endif
// _COMPANY_H_
