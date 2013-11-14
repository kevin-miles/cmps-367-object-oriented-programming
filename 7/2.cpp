//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 8 Part 2
//				Due Date		April 19, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program, based on part 1, utilizes a dynamic struct array
//			instead of a static one where we only have one size. Here the 
//			dynamic struct array is allocated in the memory, then the user
//			is asked for the size of the array. Their user input is taken
//			and used to construct the size of the struct array. Using this
//			struct array, the user inputs the data amount they originally
//			set. After the information is loaded into the struct array the
//			program prints the contents of the struct array to screen.
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
// * because we are allocating the position in memory without siz
// size is given with the user input
void CopyData(int amount, struct PERSON* arr); e
void Display(int amount, struct PERSON* arr);  
void GetAmount(int& amount);

int main()
{
	//declare and initialize
	float AgeAve=0.0, GpaAve=0.0;
	int amount;

	//function calls
	GetAmount(amount);
	PERSON* p = new PERSON[amount];
	CopyData(amount, p);
	Display(amount, p);

	//termination
	system("PAUSE");
	return 0;
}

/*
		Name:		GetAmount
		Purpose:	Takes an integer variable, asks user for amount of records to input.
					Stores the user input in the variable passed by reference.
*/
void GetAmount(int& amount)
{
	cout << "Please enter the amount of records you would like to enter: ";
	cin >> amount;
}

/*
		Name:		CopyData
		Purpose:	Takes the amount of entries and the dynamic struct array containing them.
					Uses a loop to gather user input the amount of times given as input.
					Gathers the Name, Age, and Gpa as input for each iteration.
*/
void CopyData(int amount, struct PERSON* arr)
{
	for(int i=0; i < amount; i++)
	{
		cout << "Enter the name, age, and gpa: ";
		cin >> arr[i].Name >> arr[i].Age >> arr[i].Gpa;
	}
}

/*
		Name:		Display
		Purpose:	Takes the amount of entries and the dynamic struct array containing them.
					Uses a loop to print the content of the struct array given the amount of times 
					to do so(int amount). 
*/
void Display(int amount, struct PERSON* arr)
{
	cout << "Here is the input you gave for the struct: " << endl;
	cout << "\tName\tAge\tGPA" << endl;
	cout << "\t-------------------" << endl;
	for(int i=0; i<amount; i++)
	{
		cout << "\t" << arr[i].Name << "\t" << arr[i].Age<< "\t" << arr[i].Gpa << endl;
	}
	cout << endl;
}
