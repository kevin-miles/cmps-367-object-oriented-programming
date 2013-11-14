//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 10 Part 1
//				Due Date		May 10, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program uses a modified MyClass.h file, MyClass1.h
//          The class has a modified readdata member.
//          This program creates object P with a string array size of 5.
//          The contents of an array are copied into object P's array.
//          Object Q is created with an int array of size 7.
//          An integer array has its contents copied into object Q's array.
//          The arrays of both objects are displayed/
//----------------------------------------------------------------------	
#include <iostream>
#include <string>
#include "MyClass1.h"

using namespace std;

int main()
{
	//initialize arrays
	string Name[5] = {"Bill", "Tom", "John", "Mary", "Phil"};
	int Age[7] = {22, 33, 66, 44, 11, 55, 77};
	//initialize objects
	myclass<string, 5> P;
	myclass<int, 7> Q;
	
	P.readdata(Name); //copies Name into P's array
	Q.readdata(Age); // copies Age into Q's array
	P.displaydata();
	Q.displaydata();

	//terminate program
	system("pause");
	return 0;
}

/*
Bill    Tom     John    Mary    Phil

22      33      66      44      11      55      77

Press any key to continue . . .
*/