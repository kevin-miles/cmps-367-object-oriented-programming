//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 8 Part 2
//				Due Date		April 5, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: We extract information from a file using <fstream>. We extract
//			the information and place it inside two arrays, age and name.
//			Using this extracted information, the program calculates the
//			average age and students above average age. The program
//			prints the file contents to a table, prints the names of all
//			teenagers inside the file, the average age, and students name's
//			who are above the average age.
//----------------------------------------------------------------------	

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream> //file I/O

using namespace std;

float GetAverageAge(int age[]);
void ReadFile(string name[], int age[]);
void PrintFile(string name[], int age[]);
void PrintAverageAge(int age[], float average);
void PrintNames(string name[]);
void PrintStudentsAboveAverageAge(string name[], int age[], float average);

int main()
{
	//declare variables
	string name[5];
	int age[5];
	float average;

	//read input file and gather information
	ReadFile(name, age);
	//calculate average age from file
	average = GetAverageAge(age);

	PrintFile(name, age);								//print table of name and age
	PrintNames(name);									//print names of all students
	PrintAverageAge(age, average);						//print average age
	PrintStudentsAboveAverageAge(name, age, average);	//print students names who have age larger than average

	//terminate program
	system("PAUSE");
	return 0;
}
 
void ReadFile(string name[], int age[])
{
	//declare variable
	ifstream inputFile;

	//open file with our inputs
	inputFile.open("nameage.txt");

	//loop through file 5 times and take the name and
	//age from each line and assign it to the index of
	//each array based on the loop iteration count(i)
	for(int i=0; i<5; i++)
	{
		inputFile >> name[i] >> age[i];
	}

	//close file
	inputFile.close();
}

/*
	Name:	getAverageAge
	Input:	int age[]
*/
float GetAverageAge(int age[])
{
	int total=0;
	//loop through each portion of the array adding each portion
	//to the total
	for(int i=0; i<5; i++)
	{
		total += age[i];
	}
	//2 decimal places
	cout << fixed << showpoint << setprecision(2);
	return (total / 5.);
}

/*
	Name:	PrintFile
	Input:	int age[]
			string name[]
*/
void PrintFile(string name[], int age[])
{
	cout << "This is the name and age of all students:" << endl;
	cout <<"\tName \tAge" << endl;
	cout << "------------------------------------" << endl;
	//output each name and age together on a line
	for(int i=0; i<5; i++)
	{
		cout << "\t" << name[i] << "\t" << age[i] << endl;
	}
	// space after table
	cout << endl << endl;
}

/*
	Name:	PrintAverageAge
	Input:	int age[]
			float average
*/
void PrintAverageAge(int age[], float average)
{
	cout << "The average age of all students is " << average << endl;
}

/*
	Name:	PrintNames
	Input:	string name[]
*/
void PrintNames(string name[])
{
	cout << "This is the name of all teenagers: ";
	//loop through each portion of the array, printing the content
	for(int i=0; i<5; i++)
	{
		cout << name[i] << " ";
	}
	cout << endl;
}

/*
	Name:	PrintStudentsAboveAverageAge
	Input:	int age[]
			string name[]
			float average
*/
void PrintStudentsAboveAverageAge(string name[], int age[], float average)
{
	cout << "This is the name of all students whose age is above average: ";
	//loop through each portion of the array, printing the relative name
	//if the age is above average
	for(int i=0; i<5; i++)
	{
		if(age[i] > average) cout << name[i] << " ";
	}
	cout << endl;
}

/*
This is the name and age of all students:
		Name    Age
------------------------------------
		Martin  22
		Austin  18
		Daniel  19
		Marggie 23
		Tyler   16


This is the name of all teenagers: Martin Austin Daniel Marggie Tyler
The average age of all students is 19.60
This is the name of all students whose age is above average: Martin Marggie
Press any key to continue . . .
*/