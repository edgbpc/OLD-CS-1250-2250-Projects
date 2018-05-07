#ifndef Pharmacy_h
#define Pharmacy_h
#include "Patient.h"

class Pharmacy
{
	private:
	int DrugChoice[6] = { 0, 5, 10, 15, 20, 25 }; //array of prices for drugs selected in main.cpp.  each element corresponds with the number selected by the user in main  IE 1 = $5, 2 = $10, etc
	double newCharge; // this value will be passed between functions in order to calculate charges.  value from the array will be assigned to this variable when user selects from the menu
	
	public:
	Pharmacy();
	double drugCost();
	void updateAccount(Patient&, int);
	
};
#endif
