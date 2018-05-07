


int main()
{
	
	ageData = makeArray(SIZE);
	selectionSort(ageData, SIZE);
	cout << average(ageData, SIZE);
	cout << median(ageData, SIZE);
	cout << mode(ageData SIZE);
	
	cout << &ageData;
	
	return 0;
}

//functions


int *makeArray(int SIZE)
{
	new int Dataset[SIZE];
	
	return &DataSet;
}

void getSampleData(int [], int)
{
	ifstream inputFile;
	inputFile.open("CSVDATA.csv");
	
	while (file.good())
	{
		getline(file, value, ',');
		int k = stoi(value);
		arr[numSample] = k;
		numSample++;

	}

}

//selection sort
//credit for the code to Gaddis

void SelectionSort(int [], int)
{
   int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = array[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      array[minIndex] = array[startScan];
      array[startScan] = minValue;
   }
}

//mode

int mode(int[], int)
{
    
        int counter = 1;
        int max = 0;
        int mode = array[0];
        for (int pass = 0; pass < SIZE - 1; pass++)
        {
           if ( array[pass] == array[pass+1] )
           {
              counter++;
              if ( counter > max )
              {
                  max = counter;
                  mode = array[pass];
              }
           } else
              counter = 1; // reset counter.
        }
    cout << "The mode is: " << mode << endl;
}

//mean

void mean (int [], int)
{
	int count = 0;
		for (int pass = 0; pass < SIZE - 1, pass++)
	{
		count+=array[pass];
	}
	cout << double mean = count/SIZE;
	
}

//median
void median (int [], int)
{
	int isMedian, indexHi, indexLo;
	int array[SIZE];
	if (SIZE !% 2 = 0)
	{
		indexHi = (Size / 2) + 1;
		indexLo = (Size / 2) - 1;
		isMedian = ()array[indexHi] + array[indexLo]) / 2;
	}
}

