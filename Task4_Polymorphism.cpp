#include <conio.h>
#include <iostream>

using namespace std;
class transport {
	float weight, speed;
	char capacity[50];
public:
	void load() {
		cout << "Goods are loaded successfully" << endl;

	}
	void unload() {
		cout << "Goods are unloaded successfully" << endl;

	}
	virtual void ship() = 0;

};
class land_Transport :public transport {

	char Vehicle_type[30];
	char Transportation_Mode[50];

public:
	virtual void ship()
	{
		cout << "\nIn land transport, shipping is done via truck" << endl;


	}


};
class Air_Transport :public transport {
	char Aircraft_type[50];
	char Airline_name[50];
public:
	virtual  void ship() {

		cout << "\nIn air transport, shipping is done via air cargo" << endl;
	}


};
int main(int argc, char *argv[])
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
			transport* _transport = new land_Transport();
			_transport->ship();
		}
		else if (slct == 'A' || slct == 'a')
		{
			transport* atransport = new Air_Transport();
			atransport->ship();

		}

		cout << "\nDo you want to transport your goods?<Press Y for yes & N for no> ";

		cin >> a;

	}

	cout << "\n\nThanks for using this program..." << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
