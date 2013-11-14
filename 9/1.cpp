//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 9 Part 1
//				Due Date		April 12, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program reads the contents of a file that is pre-formatted.
//			First we print the contents of the file to the user. the
//			names and ages of people whose GPA is above the average GPA.
//----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void CopyData(string filename, string names[], int ages[], float gpas[]);
void Display(string names[], int ages[], float gpas[]);
void ComputeAverage(int ages[], float gpas[], float& ageave, float& gpaave);
void DisplayHighGpa(string names[], int ages[], float gpas[], float gpaave);

const int TOTAL_INPUTS=6; //set constant to initialize arrays to and to read file based off of it

int main()
{
	//initialize arrays
	int		Age[TOTAL_INPUTS];
	float	Gpa[TOTAL_INPUTS];
	string	Name[TOTAL_INPUTS];

	//initialize average variables to be used when calling functions with pass by reference
	float	AverageAge,
			AverageGPA;

	CopyData("data.txt", Name, Age, Gpa);
	Display(Name, Age, Gpa);
	ComputeAverage(Age, Gpa, AverageAge, AverageGPA);
	DisplayHighGpa(Name, Age, Gpa, AverageGPA);

	//terminate program
	system("PAUSE");
	return 0;
}

void CopyData(string filename, string names[], int ages[], float gpas[])
{
	fstream file;

	file.open(filename, ios::in);		//open filename
	for(int i=0; i<TOTAL_INPUTS; i++)	//uses TOTAL_INPUTS constant to check for boundary
	{
		//here we use file instead of the usual cin for input because we taking input from
		//the filename, not directly from the user.
		file >> names[i] >> ages[i] >> gpas[i];
		//data is pre-organized to fit this method of gathering input
		//EX: NAME		AGE		GPA
		//	  NAME2		AGE2	GPA2 
	}
	file.close();						//close filename
}
/*
		NAME:		Display
		PURPOSE:	Takes the arrays originating from the file input regarding names, ages,
					and gpas. Using this infomation this function prints out the contents
					into a table.
*/
void Display(string names[], int ages[], float gpas[])
{
	//print head of table
	cout << "\tFILE CONTENTS" << endl;
	cout << "\tName" << "\tAge" << "\tGPA" << endl;
	cout << "------------------------------------------" << endl;
	
	for(int i=0; i<TOTAL_INPUTS; i++)	//cycles through each part of the arrays and outputs data to table
	{
		cout << "\t" << names[i] << "\t" << ages[i] << "\t" << gpas[i] << endl;
	}

	cout << endl << endl; //formatting purposes
}


/*
		NAME:		ComputeAverage
		PURPOSE:	Takes the arrays containing the ages and gpas from the file input, 
					average age, and average gpa. It prints computes the average age 
					and gpa and then assigns the value to the respective variable
					passed when calling the function.
*/
void ComputeAverage(int ages[], float gpas[], float& ageave, float& gpaave)
{
	float sum = 0;	//used to store sum of all GPAs
	for(int i=0; i < TOTAL_INPUTS; i++)
	{
		sum += gpas[i];
	}
	gpaave = sum / TOTAL_INPUTS;

	sum = 0;	//reset sum to be used in the next loop
	for(int i=0; i < TOTAL_INPUTS; i++)
	{
		sum += ages[i];
	}
	ageave = sum / TOTAL_INPUTS;	
	

}


/*
		NAME:		DisplayHighGpa
		PURPOSE:	Takes the arrays containing file input and the average GPA as input.
					Prints a table containing the name and age of individuals that have
					a GPA higher than the average.
*/
void DisplayHighGpa(string names[], int ages[], float gpas[], float gpaave)
{
	//print head of table

	cout << "\tGPAs ABOVE AVERAGE" << endl;
	cout << "\tName" << "\tAge" << endl;
	cout << "------------------------------------------" << endl;
	
	for(int i=0; i<TOTAL_INPUTS; i++)	//cycles through each part of the arrays and outputs data to table
	{
		if(gpas[i] > gpaave)	//print if their GPA is above average
		{
			cout << "\t" << names[i] << "\t" << ages[i] << endl;
		}
	}		

		cout << endl << endl; //formatting purposes

}
/*
		FILE CONTENTS
		Name    Age     GPA
------------------------------------------
		Bryan   21      3.1
		Amanda  17      2.8
		Randy   22      3.1
		Joel    16      3.2
		Samuel  19      2.9
		Eric    24      3.1


		GPAs ABOVE AVERAGE
		Name    Age
------------------------------------------
		Bryan   21
		Randy   22
		Joel    16
		Eric    24


Press any key to continue . . .
*/