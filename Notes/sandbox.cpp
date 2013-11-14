#include <iostream>
#include <fstream>
#include <string>


using namespace std;

//include user defined libraries
#include "MyLib1.h"

int main()
{
	SIX<3> Q;
	Q.CopyData("data3.txt");
	Q.Display();

	system("PAUSE");
	return 0;
}
