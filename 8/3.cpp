//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 8 Part 3
//				Due Date		April 5, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program displays three different array types using the
//			same function. The Display function uses a template to allow this
//			functionality. It iterates through each index of the array passed
//			and outputs the corresponding value with a trailing space.
//----------------------------------------------------------------------	

#include <string>
#include <iostream>
using namespace std;

template <class Z>
void Display(Z arr, int size);

int main()
{
	//declare and initialize variables
	int a[5]={10, 4, 9, 55, 11};
	string Days[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
	char Vowels[5] = {'A','E','I','O','U'};

	//call function with each array
	Display(a, 5);
	Display(Days, 7);
	Display(Vowels, 5);
	
	//terminate program
	system("PAUSE");
	return 0;
}

template <class Z>
void Display(Z arr, int size)
{
	//iterate through each index of the array and output the index's value with a space trailing
	for(int i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl; //add lines after output for formatting purposes
}
/*
10 4 9 55 11

Mon Tue Wed Thu Fri Sat Sun

A E I O U

Press any key to continue . . .10 4 9 55 11

Mon Tue Wed Thu Fri Sat Sun

A E I O U

Press any key to continue . . .
*/