#ifndef MYCLASS
#define MYCLASS
template < class T, int n >
class myclass
{
private: T a[n];
public: void readdata(T arr[n]);
		void displaydata();
};

template <class T, int n>
void myclass<T,n> :: readdata(T arr[n])
{
	for(int i=0; i<n; i++)
	{
		a[i] = arr[i];
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
#endif