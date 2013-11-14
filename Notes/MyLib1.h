//to make a user defined library add the following:
#ifndef MYLIB1 //if not defined in the program, then define it
#define MYLIB1

template <int n>
class SIX
{
private: 
	struct RECORDS
	{
		string name;
		int age;
	};
	RECORDS a[n];
public:
	void CopyData(string filename)
	{
		fstream f;
		f.open(filename, ios::in);
		for(int i=0; i<n; i++)
		{
			f >> a[i].name >> a[i].age;
		}
		f.close();
	}
	void Display()
	{
		cout << "NAME\tAGE\n";
		cout << "------------" << endl;
		for(int i=0; i<n; i++)
		{
			cout << a[i].name << "\t" << a[i].age << endl;; 
		}
		cout << endl;
	}
};

#endif