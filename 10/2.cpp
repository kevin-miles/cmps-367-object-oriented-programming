//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 10 Part 2
//				Due Date		May 10, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program uses the MyClass2.h class. MyClass2 was customized
//          for this project portion to use the <algorithm> library to sort
//          the array in ascending order. Additionally, the class was modified
//          to where the readdata() function assigns random integers including 
//          1-99 as many times as the class array sized was initialized with.
//          The program calls readdata() to assign values to the class array,
//          displays the array contents, sorts the array contents in ascending
//          order and finally displays the sorted array contents.
//----------------------------------------------------------------------	

#include <iostream>
#include "MyClass2.h"

using namespace std;

int main()
{
	
	myclass<int, 10> P; //initialize class with an array type int of size 10
	P.readdata(); //reads data into array(assigns 10 random numbers for this project)
	P.displaydata(); //displays array contents
	P.sortarray(); //sorts array ascending
	P.displaydata(); //displays array contents

	//terminate program
	system("pause");
	return 0;
}

/*
75      86      77      22      23      21      17      43      94      37


17      21      22      23      37      43      75      77      86      94


Press any key to continue . . .
*/