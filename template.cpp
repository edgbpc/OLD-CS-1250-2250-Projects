#include <iostream>
#include <string>

using namespace std;

template <class T>  //template to test for minimum value
T minimum(T x, T y)
{
		if (x != y)
		{
			if (x < y)
				return x;
			else 
				return y;
		}
		else 
			return x;
			
		
}
template <class T> //template to test for maximum value
T maximum (T x, T y)
{
	if (x!=y)
	{
		if (x > y)
			return x;
		else	
			return y;
	}
	else 
		return x;
}


template <class T> //template computes absolute value
T absolute (T x)
{
	T value = x;
	if (value < 0)
		value *= -1;
	else 
		value *= 1;
	
	return value;
}





int main()
{
	//test variables for min/man templates

	int x1 = -2; 
	int y1 = 10;
	long x2 = 5550000;
	long y2 = 350000;
	double x3 = 45.89;
	double y3 = 55.43211;
	string x4 = "Hi";
	string y4 = "Nope";
	float x5 = 2.3;
	float y5 = 1.2;
	int x6 = 5, y6 = 5;
	
	
	cout << "**** Begin testing minimum function ****" << endl;
	cout << "*****************************************" << endl;
	cout << "Testing Min with ints : " << minimum(x1, y1) << endl;
	cout << "Testing Min with ints of same value: Both values are " << minimum(x6, y6) << endl;
	cout << "Testing Min with longs: " << minimum(x2, y2) << endl;
	cout << "Testing Min with doubles: " << minimum(x3, y3) << endl;
	cout << "Testing Min with strings: " << minimum(x4, y4) << endl;
	cout << "Testing Min with floats: " << minimum(x5, y5) << endl;
	cout << endl << endl;
	
 	cout << "**** Begin testing maximum function ****" << endl;
	cout << "****************************************" << endl;
	cout << "Testing Max with ints : " << maximum(x1, y1) << endl;
	cout << "Testing Min with ints of same value: Both values are " << maximum(x6, y6) << endl;
	cout << "Testing Max with longs: " << maximum(x2, y2) << endl;
	cout << "Testing Max with doubles: " << maximum(x3, y3) << endl;
	cout << "Testing Max with strings: " << maximum(x4, y4) << endl; 
	cout << "Testing Max with floats: " << maximum(x5, y5) << endl;
	cout << endl << endl;
	
	cout << "**** Begin testing absolute function ****" << endl;
	cout << "****************************************" << endl;
	cout << "Testing ints: Absolute value of  -35 is: " << absolute(-35) << endl << "Absolute value of 35 is also: " << absolute(35) << endl;
	cout << "Testing longs: Absolute value of 35000 is:  " << absolute(35000) << endl << "Absolute value of -35000 is also: " << absolute(-35000) << endl;
	cout << "Testing doubles: Absolute value of -4894.25 is: " <<absolute(-4894.25) << endl << "Absolute value of 4894.25 is also: " << absolute(4894.25) << endl;
	cout << "Testing floats: Absolute value of -0.25 is: " << absolute(-0.25) << endl << "Absolute value of 0.25 is also: " << absolute(0.25) << endl;
		
return 0;
}

