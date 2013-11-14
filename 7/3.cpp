//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 8 Part 3
//				Due Date		April 19, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program nests a struct inside of another. Utilizing this
//			feature we store information from a file into the struct, removing
//			the '/' characters included in the date. Finally, the contents of
//			the struct array are printed to screen.
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
struct DATE
{
	int month;
	int day;
	int year;
};
//the following struct utilizes a nested struct to account for the date of birth
struct PERSON
{
	string Name;
	DATE dob;
	float Gpa;
}; 


//declare functions with: struct structName structObjectName
//include the array size if used
//do not need to use array size when calling functions
void CopyData(string filename, struct PERSON arr[6]);
void Display(struct PERSON arr[6]);

int main()
{
	float AgeAve=0.0, GpaAve=0.0;
	PERSON p[6];
	CopyData("data2.txt", p);
	Display(p);

	system("PAUSE");
	return 0;
}

/*
		Name:		CopyData
		Purpose:	Takes the filename and a struct array. Opens an I/O stream for the filename given.
					Loops through the contents of the file and parses the information to become
					the contents of the struct array. Finally, it closes the file.
*/
void CopyData(string filename, struct PERSON arr[6])
{
	fstream file;
	file.open(filename);
	for(int i=0; i<6; i++)
	{
		file >> arr[i].Name >> arr[i].dob.month;
		file.ignore(); //ignore the / from the date
		file >> arr[i].dob.day;
		file.ignore();
		file >> arr[i].dob.year >> arr[i].Gpa;
	}
	file.close();
}

/*
		Name:		Display
		Purpose:	Takes a struct array. Prints the contents of the struct array.
					Since the struct array is nested, we chain calls together to reach
					the area we need to in order to print it as output. 
					(EX: arr[i].dob.month) instead of arr[i].year <---this wouldnt work
*/
void Display(struct PERSON arr[6])
{
	cout << "Results of a nested struct made from an external file: " << endl;
	for(int i=0; i<6; i++)
	{
		cout << "\t" << arr[i].Name << "\t\t" <<  arr[i].dob.month << '/' << arr[i].dob.day << '/' << arr[i].dob.year << "\t\t" << arr[i].Gpa << endl;
	}
	cout << endl;
}
/*
Results of a nested struct made from an external file:
		Bryan           1/21/85         3.1
		Avila           7/12/76         2.8
		James           6/22/81         3.1
		Joseph          6/16/79         3.2
		Samuel          9/19/80         2.9
		Will            4/24/82         3.1

Press any key to continue . . .
*/