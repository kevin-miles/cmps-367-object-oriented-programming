/*

Arrays

	- One dimensional Array

	int a[4]; //asks compiler to find 4 CONSECUTIVE spaces in memory(a[0],a[1],a[2],a[3])
	
	a[0] = 10;
	a[1] = 5;
	a[2] = 7;
	a[3] = 20;  

	//display array a
	cout << a[0] << endl;
	cout << a[1] << endl;
	.....

	OR

	//if <= then it will not show error/complain it will print something out for the value of the index
	//it is referred to as not checking for boundry
	for(int i=0; i<4; i++) 
	{
		cout << a[i] << endl;
	}


	TO DECLARE AND INITIALIZE

	int a[4] = { 3, 2, 9, 1}; 
	int a[4] = { 3, 2 }; //first two indexes filled, but rest undeclared of type whatever array is initialized as

------------------------------------------------------------------------------------------------------------------
	//Compute the total of all data in array a
	
	int sum = 0;

	for(int i=0; i<4; i++) 
	{
		sum += a[i];
	}

------------------------------------------------------------------------------------------------------------------
	
	//find max and min of a
	
	int max = a[0],
		min = a[0];

	for(int i=1; i<4; i++) 
	{
		if(a[i] > max) { max = a[i]; }
		if(a[i] < min) { min = a[i]; }
	}

------------------------------------------------------------------------------------------------------------------

	//read data into array a

	int a[4];

	for(int i=0; i<4; i++)
	{
		cout << "Enter a number: ";
		cin >> a[i];
	}

	OR

	Read(a, 4); //calling function

	void Read(int a[], int n)
	{
		for(int i=0; i<4; i++)
		{
			cout << "Enter a number: ";
			cin >> a[i];
		}
	}

------------------------------------------------------------------------------------------------------------------

	//write function to return max and min of array

	FindMaxMin(a, 4, max, min); //calling function

	void FindMaxMin(int a[], int n, int& max, int& min)
	{
		max = a[0];
		min = a[0];

		for(int i=1; i<4; i++)
		{
			if(a[i] > max) { max = a[i]; }
			if(a[i] < min) { min = a[i]; }
		}
	}


------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <algorithm> //this library provides predefined method sort
//sort(a, a+5) name of array, name of array + size
#include <string>

using namespace std;

template <class Z>
void Display(Z x[],int n)
{
	for(int i=0; i<4; i++)
	{
		cout << x[i] << "\t";
	}
	cout << endl;
}

int main()
{
	int a[5] = {3,9,8,1,6};
	sort(a, a+5);
	Display(a, 5);

	string name[4] = {"mary", "bob", "adam", "john" };
	sort(name, name+4);
	Display(name, 4);

	system("pause");
	return 0;
}
------------------------------------------------------------------------------------------------------------------

TWO DIMENSIONAL ARRAYS

	int shirts[3][4]; //first is # of rows, second is # of sizes

	//read data
	for(int row=0; row < 3; row++)
	{
		for(int col=0; row < 4; row++)
		{
			cout << "Enter a number: ";
			cin >> shirts[row][col];
		}
	}
------------------------------------------------------------------------------------------------------------------

//compute total inventory

	int total=0;

	for(int row=0; row < 3; row++)
	{
		for(int col=0; row < 4; row++)
		{
			total += shirts[row][col];
		}
	}
------------------------------------------------------------------------------------------------------------------

//compute total of all green shirts

	int row=1,
		total=0;

	for(int col=0; col < 4; col++)
	{
		total += shirts[row][col];
	}
------------------------------------------------------------------------------------------------------------------

//compute total of all large shirts

	int col=2,
		total=0;

	for(int row=0; row < 3; row++)
	{
		total += shirts[row][col];
	}
------------------------------------------------------------------------------------------------------------------

int a[3][4][2] = {1,2,3,4,..24};


------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------