/**
* @file Task4_Polynorphism.cpp
*
* @brief This code implements Polymorphism concepts.
* Land & Air Transport classes are inhereted from transport. 
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;
#include "AirTransportT4.h" 
#include "LandTransportT4.h" 


// function main begins program execution
void main()
{
	char a;
	char slct;
	cout << "Do you want to transport your goods?<Press Y for yes & N for no> ";
	cin >> a;
	while (a == 'Y' || a == 'y') {
		cout << "\n**************************************" << endl;
		cout << "press 'L' or 'l' to use land transport service" << endl;
		cout << "\nPress 'A' or 'a' to use air transport service" << endl;
		cout << "*************************************" << endl;
		cin >> slct;

		if (slct == 'L' || slct == 'l') {
			Transport* _transport = new LandTransport();
			_transport->Ship();
		}
		else if (slct == 'A' || slct == 'a')
		{
			Transport* atransport = new AirTransport();
			atransport->Ship();

		}

		cout << "\nDo you want to transport your goods?<Press Y for yes & N for no> ";

		cin >> a;

	}

	cout << "\n\nThanks for using this program..." << endl;
	
	system("pause");
}
// end main
