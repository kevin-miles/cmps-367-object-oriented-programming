//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 8 Part 1
//				Due Date		April 5, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program reads 6 integer numbers and places them into an
//			array. The program then prints the contents of the array to 
//			the screen. It calculates and prints the average of the data 
//			in array a and the values above the average. Finally, it 
//			calculates and prints the maximum and minimum values from
//			the array.
//----------------------------------------------------------------------	

#include <iostream>
#include <iomanip>

using namespace std;

void ReadData(int numbers[]);
void Display(int numbers[]);
float FindAve(int numbers[]);
void DisplayAbove(int numbers[], float average);
void FindMaxMin(int numbers[], int& max, int& min);

const int N=6;

int main()
{
	int a[N];

	//read data into array a
	ReadData(a);

	//display array a
	Display(a);

	//Find and display the average of numbers in array a
	float Average=FindAve(a);
	cout << "Average = " << Average << endl;

	//display data numbers whose value is >=average
	DisplayAbove(a, Average);
	
	//find and display the maximum and minimum numbers in array a
	int max, min;
	FindMaxMin(a, max, min);

	cout << "The maximum data is " << max << endl;
	cout << "The minimum data is " << min << endl;

	//terminate program
	system("pause");
	return 0;
}

/*
	Name:	ReadData
	Input:	int numbers[]
*/
void ReadData(int numbers[])
{
	cout << "Enter 6 integer numbers: ";
	for(int i=0; i<=5; i++)
	{
		cin >> numbers[i];
	}
}

/*
	Name:	Display
	Input:	int numbers[]
*/
void Display(int numbers[])
{
	cout << "This is the content of array a: ";
	for(int i=0; i<=5; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}

/*
	Name:	FindAve
	Input:	int numbers[]
*/
float FindAve(int numbers[])
{
	int total=0;

	for(int i=0; i<=5; i++)
	{
		total += numbers[i];
	}
	cout << showpoint << fixed << setprecision(2);
	return (total/6.);
}

/*
	Name:	DisplayAbove
	Input:	int numbers[]
			float average
*/
void DisplayAbove(int numbers[], float average)
{
	cout << "This is the list of data whose values are above the average: ";
	for(int i=0; i<=5; i++)
	{
		if(numbers[i] > average) cout << numbers[i] << " ";
	}
	cout << endl;
}

/*
	Name:	FindMaxMin
	Input:	int numbers[]
			int max, min
*/
void FindMaxMin(int numbers[], int& max, int& min)
{
	max = numbers[0];
	min = numbers[0];

	for(int i=1; i<=5; i++)
	{
		if(numbers[i] > max) max = numbers[i];
		if(numbers[i] < min) min = numbers[i];
	}
}

/*
Enter 6 integer numbers: 22 33 44 11 88 77
This is the content of array a: 22 33 44 11 88 77
Average = 45.83
This is the list of data whose values are above the average: 88 77
The maximum data is 88
The minimum data is 11
Press any key to continue . . .
*/