//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 9
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program uses one function to display two arrays that have 
//          different data types.  Then using the sort method from <algorithm>
//          I was able to sort the array in ascending order. I followed the 
//          same concept of using template functions to implement the sort
//          function to accept two different data types.
//----------------------------------------------------------------------
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void display(T arr, int size); //prints array 
template <class T>
void sortarray(T arr, int size); //sorts array

int main()
{
	int a[5]={9,5,8,2,1}; //on the project sheet this had a 4 for initialization, causing an error. I corrected it to 5.
	string b[3]={"Exam", "Number", "Two"};

	display(a,5);
	display(b,3);
	sortarray(a, 5);
	sortarray(b, 3);
	display(a, 5);
	display(b,3);

	system("PAUSE");
	return 0;
}

template <class T>
void display(T arr, int size)
{
	for(int i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <class T>
void sortarray(T arr, int size)
{
	sort(arr, arr+size);
}


/*
9 5 8 2 1
Exam Number Two
1 2 5 8 9
Exam Number Two
Press any key to continue . . .
*/