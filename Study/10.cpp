//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 10
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program uses fstream to open a file, gather data, and place
//          it into a struct. It computers the average age and prints it.
//          Finally, it displays all names of those with ages above average.
//----------------------------------------------------------------------
#include <fstream>
#include <iostream>
#include <string> 

using namespace std;


struct PERSON
{
	string name;
		int age;
}a[10];

void ComputeAverage(float& average); //computes average age
void CopyData(string filename); //copys data of filename
void ShowAboveAverage(float average); //shows names above average age

int main()
{
	float average;
	CopyData("test.txt");
	ComputeAverage(average);
	ShowAboveAverage(average);
	system("pause");
	return 0;
}
void ShowAboveAverage(float average)
{
	cout << "\t Names Above Average" << endl;

	for(int i=0; i<10; i++)
	{
		if(a[i].age > average)
		{
			cout << "\t\t" << a[i].name << endl;
		}
	}
}

void CopyData(string filename)
{
	fstream file;
	file.open(filename, ios::in);
	for(int i=0; i<10; i++)
	{
		file >> a[i].name >> a[i].age;
	}
	file.close();
}

void ComputeAverage(float& average)
{
	float total=0;
	for(int i=0; i<10; i++)
	{
		total += a[i].age;
	}
	average = total/10;
	cout << "\t Average Age = " << average << endl << endl;
}