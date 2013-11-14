//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 2
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program stores 20 randomly generated numbers < 100 in an
//          array. It then finds the total, max, min of all numbers in array a.
//----------------------------------------------------------------------
#include <iostream>
#include <time.h>
using namespace std;

void LoadArrayRandom(int a[20]); //generates 20 random numbers and inputs them into array a
void FindMaxMin(int a[20], int& max, int& min); //finds the max and min of array a
int CompTotal(int a[20]); //computes the total of all numbers in array a

int main()
{
	int a[20],
		max,
		min;
	LoadArrayRandom(a);
	cout << "Total = " <<  CompTotal(a) << endl;
	FindMaxMin(a, max, min);
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
	system("PAUSE");
	return 0;
}
void LoadArrayRandom(int a[20])
{
	srand(time(0));
	int random=0;
	for(int i=0; i<20;i++)
	{
		 random = rand()%100; //generates random number 0-99
		 a[i] = random;
	}
}
void FindMaxMin(int a[20], int& max, int& min)
{
	max=a[0],
	min=a[0];
	for(int i=1; i<20; i++) //starts at 1 because we grabbed index 0 to set max/min
	{
		if(a[i] > max){ max=a[i]; }
		if(a[i] < min){ min=a[i]; }
	}
}

int CompTotal(int a[20])
{
	int total=0;
	for(int i=0; i<20; i++)
	{
		total += a[i];
	}
	return total;
}
/*
Total = 1175
Max = 98
Min = 13
Press any key to continue . . .
*/