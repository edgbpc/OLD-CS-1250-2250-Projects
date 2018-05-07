#include <iostream>
#include <iostream>
#include <iomanip>
#include "Patient.h"
#include "Pharmacy.h"


using namespace std;


int getMedicationType();
int medicationType;
int choice;
double cost;
int charge;
Patient patient1;
Pharmacy pharmacy;


int main()
{
	medicationType = getMedicationType();
	patient1.setDays();
	pharmacy.updateAccount(patient1, choice);
	charge = pharmacy.drugCost();
	patient1.updateCharges(charge);
	cost = patient1.getCharges();
	//cout << "charge is" << charge << endl; //testing purposes
	//cout << choice << endl; // testing purposes
	cout << "Patient Charges:\t" << fixed << setprecision(2) << cost << endl;
	return 0;
}

int getMedicationType()
{
cout << "Patient Release Menu\n";
cout << "______________________\n";
cout << "1 - Anti-biotic\n";
cout << "2 - Anti-nausea\n";
cout << "3 - Anti-inflammatory\n";
cout << "4 - Light Pain\n";
cout << "5 - Strong Pain\n";
cout << endl;
cout << "Choose a type of medication<1-5>:\t";
cin >> choice;
while (choice < 1 || choice > 5)
{
	cout << "That is not a valid choice. Please select again:\t";
	cin >> choice;
}

		 
return choice;
}


//g++ -stu=gnu++11 Patient.cpp Pharmacy.cpp Project_2.cpp -o P2