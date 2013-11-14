//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 1
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program prints a triangle in this format:
//           	   5
//                45
//               345
//              2345
//             12345
//----------------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	int limit=5;
	for(int o=0; o<limit; o++)
	{
		for(int s=(limit-o); s>1; s--)
		{
			cout << " ";
		}
		for(int n=(limit-o); n<=limit; n++)
		{
			cout << n;		
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}
/*
	5
   45
  345
 2345
12345
Press any key to continue . . .
*/