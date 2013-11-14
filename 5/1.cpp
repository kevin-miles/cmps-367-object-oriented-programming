//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 5 Part 1
//				Due Date		March 1, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program uses the main() function of a pre-completed
//			program. We take the program and built template, overloaded,
//			and regular functions to match the output given to us in the
//			original problem. We take the input of two ages, two names,
//			output the results to see in a formatted table, check to see
//			if either input is a teenager, and finally print if anyone
//			is above the average age.
//----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

template <class T>	void ReadData(T& a, T& b);
					void Display(string a, string b, int c, int d);
					void Display(int a, int b, string c, string d,  float e);
					void AreYouTeen(string a, int b);
					float FindAgeAve(int a, int b);

int main()
{
	//read the age of two friends. ReadData is a template function
	int Age1, Age2;
	cout << "Enter two friend's ages: "; 
	ReadData(Age1, Age2);

	//read two friend's names
	string name1, name2;
	cout << "Enter your friend's name: "; ReadData( name1, name2 );

	//display all data. Display is an overloaded function
	Display( name1, name2, Age1, Age2);

	//determine if your friends are teenagers or not
	cout << "Lets see if " << name1 << " is a teenager\n";
	AreYouTeen(name1, Age1);
	cout << "Lets see if " << name2 << "is a teenager\n";
	AreYouTeen(name2, Age2);

	//compute your friend's average age
	float AgeAve = FindAgeAve(Age1, Age2);

	//display the name of a friend whos age is above average
	Display(Age1, Age2, name1, name2, AgeAve);

	system("pause");
	return 0;
}

template <class T>	
void ReadData(T& a, T& b)
{
	//gather input into variables passed by reference
	cin >> a >> b;
}

void Display(string a, string b, int c, int d)
{
	//print formatted output
	cout << '\t' << left << setw(10) << "Name" <<  left << setw(10) << "Age" << endl;
	cout << "--------------------------------" << endl;
	cout << '\t' << left << setw(10) << a <<  left << setw(10) << c << endl;
	cout << '\t' << left << setw(10) << b <<  left << setw(10) << d << endl;

}

void Display(int a, int b, string c, string d,  float e)
{
	//check to see if anyone is above average age, if not then print no one
	cout << ((a > e) ? c : (b > e ) ? d : "No one") << "'s age is above average." << endl;

}

void AreYouTeen(string a, int b)
{
	//check to see if person is a teenager and outputs result
	cout << "\t" << a << (((b <= 19) && (b >= 13)) ? " is a teenager" : " you are not a teenager") << endl;
}

float FindAgeAve(int a, int b)
{
	float average = ((a + b) / 2.);
	return average;
}

/*
Enter two friend's ages: 27 19
Enter your friend's name: Bill John
		Name      Age
--------------------------------
		Bill      27
		John      19
Lets see if Bill is a teenager
		Bill you are not a teenager
Lets see if Johnis a teenager
		John is a teenager
Bill's age is above average.
Press any key to continue . . .
*/