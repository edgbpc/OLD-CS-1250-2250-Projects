#include "Pharmacy.h"
#include <iostream>

using namespace std;

//default constructor
Pharmacy::Pharmacy()
{
	newCharge = 0.00;
}
void Pharmacy::updateAccount(Patient&, int choice)
{
	 
	 newCharge = DrugChoice[choice]; //assigns the corresponding value in drugChoice array to newCharge.  This value is passed the function that calculates final charge	
}

double Pharmacy::drugCost()
{
	return newCharge;
}