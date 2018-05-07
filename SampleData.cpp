#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

//global variables

int *ageData;
const int SIZE = 294;  // size of the given csv file

//function prototypes
int *makeArray(int);
void getSampleData(int arr [], int);
void SelectionSort(int values [], int);
void mean(int [], int);
void median(int [], int);
void mode(int [], int);

int main ()
{
	ageData = makeArray(SIZE);
	getSampleData(ageData, SIZE);
	SelectionSort(ageData, SIZE);
	mean(ageData, SIZE);
	median(ageData, SIZE);
	mode(ageData, SIZE);
	delete ageData;
	return 0;
	
}


//function definitions


//*makeArray uses dynamically allocated memory to create an array and returns its address
int *makeArray(int)
{
	ageData = new int [SIZE];
	
	return ageData;
}

//getSampleData receives the address of the array created in *makeArray and fills it with data from provided csv


void getSampleData(int arr[], int)
{
	ifstream file;
	file.open("./CSVDATA.csv");
	int numSample = 0;
	string value;
	int k;
	
	while (file.good())
	{
		getline(file, value, ',');
		k = stoi(value);
		arr[numSample] = k;
		numSample++;
	}
	
}

//selection sort -- those code was taken from the textbook and edited to meet needs of this program
void SelectionSort(int values[], int)
{
   int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (SIZE - 1); startScan++)
   {
      minIndex = startScan;
      minValue = values[startScan];
      for(int index = startScan + 1; index < SIZE; index++)
      {
         if (values[index] < minValue)
         {
            minValue = values[index];
            minIndex = index;
         }
      }
      values[minIndex] = values[startScan];
      values[startScan] = minValue;
   }
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(values + i) << setw(5);
	}
	cout << endl;
}
//calculates the average of all data in the array.  commented cout was used to test the accumulator 
void mean (int arr[], int)
{
	int count = 0;
	double mean;
		for (int pass = 0; pass < SIZE; pass++)
	{
		count+=arr[pass];
	}
	// cout << count << endl; -- testing purposes
	mean = static_cast<double>(count)/SIZE;
	cout << "The average is: " << fixed << setprecision(2) << mean << endl;
}
//mode - determines most occurring data point in the array
void mode(int arr[], int)
{
    
        int counter = 1;
        int max = 0;
        int mode = arr[0];
        for (int pass = 0; pass < SIZE - 1; pass++)
        {
           if ( arr[pass] == arr[pass+1] )
           {
              counter++;
              if ( counter > max )
              {
                  max = counter;
                  mode = arr[pass];
              }
           } else
              counter = 1; // reset counter.
        }
    cout << "The mode is: " << mode << endl;

}

//median - finds the median value of the error whether even or odd # of data points in the array.  in the given 
//csv the array has an even # of data points.  the commented lines used to ensure no logic errors.  
void median (int arr[], int)
{
	int indexMid, indexLo;
	double isMedian;
	if (SIZE %2 == 0)
	{
		indexMid = (SIZE / 2);
		// cout << arr[indexMid] << endl << indexMid << endl; -- testing purposes
		indexLo = (SIZE / 2) - 1; 
		// cout << arr[indexLo] << endl << indexLo << endl; -- testing purposes
		isMedian = static_cast<double>(arr[indexMid] + arr[indexLo]) / 2;
	
	}
	else 
		isMedian = SIZE/2;
		
		cout << "The Median is :" << isMedian << endl;
	}