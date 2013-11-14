//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 3
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program computes the total of all data in array a using
//          loop structures.
//----------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int a[2][2][2] = {11,12,13,14,15,16,17,18};
	int total = 0;

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			for(int k=0; k<2; k++)
			{
				total += a[i][j][k];
			}
		}
	}
	cout << "Total = " << total << endl;
	system("PAUSE");
	return 0;
}

/*
Total = 116
Press any key to continue . . .
*/