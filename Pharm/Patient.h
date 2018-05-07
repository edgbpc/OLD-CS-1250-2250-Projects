#ifndef Patient_h
#define Patient_h

class Patient
{
private:
int days;
double charges;

public:
Patient();
void setDays();
void updateCharges(double);
double getCharges();


};

#endif