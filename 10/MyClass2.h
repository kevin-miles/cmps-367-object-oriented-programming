#ifndef MYCLASS
#define MYCLASS

#include <ctime>
#include<algorithm>
template < class T, int n >
class myclass
{
private: T a[n];
public: void readdata();
		void displaydata();
		void sortarray();
};

template <class T, int n>
void myclass<T,n> :: readdata()
{
	int random;
	srand(time(0)); //random seed
	for(int i=0; i<n; i++)
	{
		random = rand() % 100 + 1; //1-99 
		a[i] = random; //asign random number to array index
	}
}

template <class T, int n>
void myclass<T,n> :: displaydata()
{
	for(int i=0; i<n; i++)
	{
		cout << a[i] << "\t";
	}
		cout << endl << endl;
}

template <class T, int n>
void myclass<T,n> :: sortarray()
{
	sort(a, a+n); //sorts array using default comparer
}
#endif