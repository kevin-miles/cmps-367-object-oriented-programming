//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 8 Part 1
//				Due Date		April 19, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program loads an external .txt file into a struct array.
//			The program prints the contents of the struct array to screen.
//			Using this struct, the program calculates average gpa and 
//			average age. It prints this information to screen. Finally,
//			it prints all persons with a GPA above average.
//----------------------------------------------------------------------	
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

//defining a struct
//each variable defined inside can be called like a method
//EX: PERSON test;
//		test.Name = "John";
//		test.Age = 23; ...etc.
struct PERSON
{
	string Name;
	int Age;
	float Gpa;
}; 

//declare functions with: struct structName structObjectName
//include the array size if used
//do not need to use array size when calling functions
void CopyData(string filename, struct PERSON arr[6]);
void DisplayTeens(struct PERSON arr[6]);
void ComputeAverage(struct PERSON arr[6], float& AvgAge, float& GpaAve);
void DisplayHighGpa(struct PERSON arr[6], float GpaAve);

int main()
{
	//declare and initialize
	float AgeAve=0.0, GpaAve=0.0;
	PERSON a[6];

	//function calls
	CopyData("data.txt", a);
	DisplayTeens(a);
	ComputeAverage(a, AgeAve, GpaAve);
	DisplayHighGpa(a, GpaAve);

	//terminate
	system("PAUSE");
	return 0;
}

/*
		Name:		CopyData
		Purpose:	pass pre-formatted file's name and the struct to load the file into.
					function loads file into the struct and closes the file.
					the struct is automatically passed by reference, so it is updated 
					outside of the scope of the function
*/
void CopyData(string filename, struct PERSON arr[6])
{
	fstream file;
	file.open(filename);
	for(int i=0; i<6; i++)
	{
		file >> arr[i].Name >> arr[i].Age >> arr[i].Gpa;
	}
	file.close();
}

/*
		Name:		DisplayTeens
		Purpose:	Takes a struct in and loops through the contents and prints them out.
*/
void DisplayTeens(struct PERSON arr[6])
{
	cout << "STUDENTS LOADED FROM FILE INTO STRUCT ARRAY: " << endl;
	for(int i=0; i<6; i++)
	{
		cout << "\t" << arr[i].Name << "\t" << arr[i].Age<< "\t" << arr[i].Gpa << endl;
	}
	cout << endl;
}

/*
		Name:		ComputeAverage
		Purpose:	receives struct array, average age, and gpa average.
					calculates average age and average GPA. since GpaAve
					and AvgAge are passed by reference, they are updated
					outside of the scope of the function.
					finally, it prints the averages to screen.
					
*/
void ComputeAverage(struct PERSON arr[6], float& AvgAge, float& GpaAve)
{
	//format to two decimal places
	cout << fixed << showpoint << setprecision(2);
	int agetotal=0;
	for(int i=0; i<6; i++){ agetotal += arr[i].Age; }	//gather total ages of every student
	AvgAge = agetotal/6;								//compute average

	float gpatotal=0.0;
	for(int i=0; i<6; i++){ gpatotal += arr[i].Gpa; }	//gather total GPA of every student
	GpaAve = gpatotal/6;								//compute average

	cout << "Average Age: " << AvgAge << endl;
	cout << "Average GPA: " << GpaAve << endl;
	
}

/*
		Name:		DisplayHighGpa
		Purpose:	takes a struct array and the average gpa.
					uses a loop to go through the arrays. if their score is above
					average then it prints the person's name and age to screen.
*/
void DisplayHighGpa(struct PERSON arr[6], float GpaAve)
{
	cout << "Students with GPA ABOVE Average: " << endl;
	for(int i=0; i<6; i++)
	{ 
		if(arr[i].Gpa > GpaAve)
		{
			cout << "\t" << arr[i].Name << "\t" << arr[i].Age << endl;
		}
	}	//gather total GPA of every student
}

/*
STUDENTS LOADED FROM FILE INTO STRUCT ARRAY:
		Bryan   21      3.1
		Avila   17      2.8
		James   22      3.1
		Joseph  16      3.2
		Samuel  19      2.9
		Will    24      3.1

Average Age: 19.00
Average GPA: 3.03
Students with GPA ABOVE Average:
		Bryan   21
		Avila   17
		James   22
		Joseph  16
		Samuel  19
		Will    24
Press any key to continue . . .
*/