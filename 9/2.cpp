//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 9 Part 2
//				Due Date		April 12, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program takes three arrays and sorts them using a user-defined
//			sorting algorithm based on the bubble sort algorithm, a pre-defined
//			function from <algorithm>(sort()), and prints the contents of the 
//			arrays.
//----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>


using namespace std;

template <class Z>
void SortArray(Z arraytosort, int length);
template <class G>
void PrintArray(G arraytoprint, int length);

int main()
{
	//initialize arrays
	int		a[5]		=	{11,55,22,88,33};
	string	month[12]	=	{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	char	letters[4]	=	{'E','X','A','M'};
	
	PrintArray(a, 5);
	PrintArray(month, 12);
	PrintArray(letters, 4);
	//terminate program
	system("PAUSE");
	return 0;
}

/*
		NAME:		SortArray
		Purpose:	This function loops through the contents of an array passed on it.
					It is based on the bubble sort method. I wrote this function based
					on the pseudocode found on http://en.wikipedia.org/wiki/Bubble_sort#Pseudocode_implementation
					Using this algorithm, the function organized the array in ascending order.
*/
template <class Z>
void SortArray(Z arraytosort, int length)
{
	
	bool swapped = true;	//start off with true so while loop will execute

	while(swapped==true)	//keep repeating if a swap has occurred
	{
		for(int i=1; i<length; i++)
		{
			if(arraytosort[i-1] > arraytosort[i])			//if the index prior is larger than the current iteration
			{
				swap(arraytosort[i-1], arraytosort[i]);		//swap the contents
				swapped = true;								//swapped occurred, it is true
			}
			else
			{
				swapped = false;							//swap did not occur, break out of loop because swapped is false
			}
		}
		length--;											//reduce length needed to check by one. last number is the lowest.
	}
}

/*
		NAME:		PrintArray
		Purpose:	This function prints the contents of the original array.
					It then sorts it using the user defined sorting function SortArray.
					Then it resets the array to its original state and uses the
					<algorithm> function sort() to sort the array.
*/
template <class G>
void PrintArray(G arraytoprint, int length)
{
	G arraycopy = arraytoprint;
	cout << "Original Array: ";
	for(int i=0; i<length; i++)
	{
		cout << arraytoprint[i] << " ";
	}
	cout << endl;

	cout << "\tArray letters sorted by user defined SortArray function: ";
	SortArray(arraytoprint, length); //sort using user-defined method
	for(int i=0; i<length; i++)
	{
		cout << arraytoprint[i] << " ";
	}
	cout << endl;

	arraytoprint = arraycopy; //reset array to original copy

	cout << "\tArray letters sorted by predefined sort function: ";
	sort(arraytoprint, arraytoprint+length); //sort using pre-defined method
	for(int i=0; i<length; i++)
	{
		cout << arraytoprint[i] << " ";
	}
	cout << endl << endl;
}

/*

Original Array: 11 55 22 88 33
		Array letters sorted by user defined SortArray function: 11 22 33 55 88
		Array letters sorted by predefined sort function: 11 22 33 55 88

Original Array: Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
		Array letters sorted by user defined SortArray function: Apr Aug Dec Feb Jan Jul Jun Mar May Nov Oct Sep
		Array letters sorted by predefined sort function: Apr Aug Dec Feb Jan Jul Jun Mar May Nov Oct Sep

Original Array: E X A M
		Array letters sorted by user defined SortArray function: A E M X
		Array letters sorted by predefined sort function: A E M X

Press any key to continue . . .
*/