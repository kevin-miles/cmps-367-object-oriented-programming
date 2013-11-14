//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 10 Part 3
//				Due Date		May 10, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: Using MyClass3.h I implemented a member to the class to copy data from
//          a file consisting of 5 entries(name age gpa) into the array from the
//          object. Additionally I added a member to calculate the average age
//          and another to display the names of all students above the average age.
//----------------------------------------------------------------------	

#include <string>
#include <iostream>
#include "MyClass3.h"
using namespace std;


void read(string filename);

struct person{ string name;
				   int age;
				   float gpa;
				 };
int main()
{
	myclass<5> P; //create object p from MyClass3.h, initialized with an array size 5

	P.readfile("records.txt"); //reads file into object
	P.averageage(); //calculates average age and stores it inside object privately
	P.aboveaverage(); //checks if age is above average, if so it prints their name
	
	//terminate program
	system("pause");
	return 0;
}


/*
Students Above Average Age
--------------------------
Mary
Fred
Press any key to continue . . .
*/