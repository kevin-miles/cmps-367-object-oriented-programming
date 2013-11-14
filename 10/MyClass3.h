#ifndef MYCLASS
#define MYCLASS

#include <string>
#include <fstream>

using namespace std;

template <int n>
class myclass
{
private:
	struct person{ string name;
	               int age;
				   float gpa;
	             };
	person a[n];
public: 
void readdata();
void readfile(string filename);
void averageage();
void aboveaverage();
void displaydata();

		 int average; //holds the average age  of the array when averageage() is called
};                    

template <int n>
void myclass<n> :: readdata()
{
	for(int i=0; i<n; i++)
	{
		a[i] = arr[i];
	}
}

template <int n>
void myclass<n> :: readfile(string filename)
{
	fstream f;
	f.open(filename, ios::in);
	for(int i=0; i<n; i++)
	{
		f >> a[i].name >> a[i].age >> a[i].gpa;
	}
	f.close();
}


template <int n>
void myclass<n> :: averageage()
{
	float total=0;
	for(int i=0; i<n;i++)
	{
		total+=a[i].age;
	}
	average = total/n;
}


template <int n>
void myclass<n> :: aboveaverage()
{
	cout << "Students Above Average Age" << endl;
	cout << "--------------------------" << endl;
	for(int i=0; i<n; i++)
	{
		if(a[i].age > average)
		{
			cout << a[i].name << endl;
		}
	}
	
}


template <int n>
void myclass<n> :: displaydata()
{
	for(int i=0; i<n; i++)
	{
		cout << a[i] << "\t";
	}
		cout << endl << endl;
}
#endif