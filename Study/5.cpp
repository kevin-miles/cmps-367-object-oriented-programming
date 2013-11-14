//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 5
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program converts a a two dimensional character array to uppercase.
//          It swaps out the third word with the word "cool", then displays all
//          words in array a followed by their length.
//----------------------------------------------------------------------
#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

void upperArray(char a[][8]); //converts array to uppercase
void swapCool(char a[][8]);   //swaps the third element in array a with the word "cool"
void displayWordsAndLength(char a[][8]); //displays all words in array a with their length

int main()
{
	char a[4][8]={"fun","joy","bliss","delight"}; //originally [4][6] but would give initialization error because delight requires 8
	
	upperArray(a);
	swapCool(a);
	displayWordsAndLength(a);

	system("pause");
	return 0;
}

void upperArray(char a[][8])
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<8; j++)
		{
			a[i][j] = toupper(a[i][j]);
		}
	}
}

void swapCool(char a[][8])
{
	char cool[8]="cool";
	for(int i=0; i<8;i++)
	{
		a[3][i]=cool[i];
	}
}

void displayWordsAndLength(char a[][8])
{
	for(int i=0; i<4; i++)
	{
		cout << a[i] <<  " - " << strlen(a[i]) << endl;
	}
}