//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 5(2)
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program makes use of a template function to allow two 
//          different data types to be passed to the same function.
//----------------------------------------------------------------------
#include <string>
#include <iostream>

using namespace std;

template <class T>
void Read(T& i1, T& i2, T& i3);

int main()
{
	int i1, i2, i3;
	string s1, s2, s3;
	cout << "Enter 3 integer numbers: ";
	Read(i1, i2, i3);
	cout << "Enter 3 names: ";
	Read(s1, s2, s3);

	cout << i1 << " " << i2 << " " << i3 << endl;
	cout << s1 << " " << s2 << " " << s3 << endl;

	system("PAUSE");
	return 0;
}

template <class T>
void Read(T& i1, T& i2, T& i3)
{

	cin >> i1 >> i2 >> i3;
}


/*
Enter 3 integer numbers: 1 2 3
Enter 3 names: john bob sally
1 2 3
john bob sally
Press any key to continue . . .
*/