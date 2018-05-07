#include "Patient.h"
#include <iostream>

using namespace std;

//default constructor
Patient::Patient()
{
	days = 0;
	charges = 0.00;
}

//Function setDays asks the user how many days the drug is to be taken.  Value user enters will be passed to the function to calculate final cost
void Patient::setDays()
{
	
cout << "How many days does the patient need to take the medication <1-10>?\t";
cin >> days;
while (days < 1 || days > 10) //input validation
{
	cout << "Number of days must be between 1 and 10. Please select again:\t";
	cin >> days;
}		
//cout << "days -- " << days ; // testing purposes only
	
}	

//Function accepts the value chosen by user from drugChoice in the pharmacy class		
void Patient::updateCharges(double newCharge)
{
	// cout << "days is " << days << endl; // testing purposes only
	// cout << "new charge is " << newCharge << endl; //testing purposes only
 	charges += (newCharge * days);
}

double Patient::getCharges()
{
return charges;	
}

