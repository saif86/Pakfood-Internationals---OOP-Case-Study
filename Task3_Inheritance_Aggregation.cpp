/**
* @file Task3_Inheritance_Aggregation.cpp
*
* @brief This code implements Inheritance & Aggregation concepts.
* Land & Air Transport classes are inhereted from transport. 
* Class Company has aggregation with Room and Hall Classes.
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;
#include "Company.h" 
#include "AirTransportT3.h" 
#include "LandTransportT3.h" 


// function main begins program execution
void main()
{
	Room r[2];
	r[0].SetRoom(2, 2);
	r[1].SetRoom(3, 4);
	
	
	Company c1;
	c1.SetRoom(&r[0]);
	c1.SetRoom(&r[1]);
	c1.PrintRooms();
	
	AirTransport air_T1;
	LandTransport land_T2;

	cout << "Welcome to PakFood Internationals" << endl;
	
	system("pause");
}
// end main
