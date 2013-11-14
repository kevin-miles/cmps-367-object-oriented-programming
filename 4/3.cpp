//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 4 Part 3
//				Due Date		March 1, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes three integer numbers and uses user 
//			defined functions to calculate and print the sum, average,
//			maximum, and minimum.
//----------------------------------------------------------------------

#include <iostream>

using namespace std;

int ComputeSum(int x, int y, int z);
void ReadData(int &x, int &y, int &z);
void ComputeAverage(int x, int y, int z, float &average);
void Display(int x, int y, int z, int total, float average);
void FindMaxMin(int x, int y, int z, int &max, int &min);
void DisplayMinMax(int x, int y, int z, int max, int min);

int main()
{
	//initialize and declare variables
	int x,
		y,
		z,
		total,
		max,
		min;
	float average;

	//Read data into x, y, and z
	ReadData(x, y, z);

	//compute the total of x, y, and z
	total = ComputeSum(x, y, z);

	//compute the average of x, y, and z
	ComputeAverage(x, y, z, average);

	//display total and average of x, y, and z
	Display(x, y, z, total, average);

	//Find the maximum and minimum of x, y, and z
	FindMaxMin(x, y, z, max, min);

	//Display the max and min values
	DisplayMinMax(x, y, z, max, min);

	//Terminate program
	system("pause");
	return 0;
}

/*
	Name: ReadData
	Input: int x, y, z (passed by reference)
*/
void ReadData(int &x, int &y, int &z)
{
	cout << "Enter three integer numbers: ";
	cin >> x >> y >> z;
}

/*
	Name: ComputeSum
	Input: int x, y, z
*/
int ComputeSum(int x, int y, int z)
{
	int total = (x + y + z); //initialize and declare 

	return total;
}

/*
	Name: ComputeAverage
	Input:  int x, y, z
			float average (Passed by reference)
*/
void ComputeAverage(int x, int y, int z, float &average)
{
	average = ((x + y + z) / 3.); //compute float average of three numbers 
}

/*
	Name: DisplayMinMax
	Input: int x, y, z, max, min
*/
void DisplayMinMax(int x, int y, int z, int max, int min)
{
	cout << "\tThe max and min of " << x << ", " << y << ", and " << z << " is " << max << " and " << min << endl;
}

/*
	Name: FindMaxMin
	Input:  int x, y, z
			int max, min (passed by reference)
*/
void FindMaxMin(int x, int y, int z, int &max, int &min)
{
	max = x;
	min = x;

	//the first two if statements check to see if
	//y or z are larger than x. if they are not then
	//it is assumed in the else statement that z
	//and y are both less than x.
	if(y > x)
	{ 
		//checks if z or y is larger
		if (z > y) { max = z; } else { max = y; }
	}
	else if(z > x) 
	{ 
		//checks to see if y or z is larger
		if (y > z) { max = y; } else { max = x; }
	}
	else
	{
		//z and y are both less than x
		//checks to see if y or z is smaller
		if (y > z) { min = z; } else { min = y; }
	}
	
}

/*
	Name: Display
	Input:	int x, y, z total
			float average
*/
void Display(int x, int y, int z, int total, float average)
{
	
	cout << "\tTotal " << x << ", " << y << ", and " << z << " is " << total << endl;

	cout << "\tThe average of " << x << ", " << y << ", and " << z << " is " << average << endl;
}

/*
Enter three integer numbers: 5 2 8
		Total 5, 2, and 8 is 15
		The average of 5, 2, and 8 is 5
		The max and min of 5, 2, and 8 is 5 and 5
Press any key to continue . . .
*/