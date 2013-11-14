//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 1 Part 4
//				Due Date		February 15, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input of an integer number < 1000
//			and converts it into word form. (1000 = One Thousand)
//----------------------------------------------------------------------


#include <iostream>
#include <iomanip>

using namespace std;

void convert_num_to_word(int num);
void convert_ones_to_word(int num);

int main()
{
	//declare variables
	float copy;
	
	int number;

	//ask user for input and put it into a variable
	cout << "Enter an integer number < 1000: ";
	cin >> number;

	convert_num_to_word(number);

	cout << endl;

	//terminate program
	system("PAUSE");
	return 0;
}

/*
	Name: convert_num_to_word

	Input:	num			number to be converted up to 9999
*/
void convert_num_to_word(int num)
{
	int ones,
		temp_digit,		//used while isolating digits
		new_num=0,		//updated number after subtracting
		length=0;			//how many digits are in the input

	float temp = num;
	
	bool teen = false;


	//figure out how many digits are in the number
	if (num == 0)
	{
		length = 1;
	}
	else
	{
		while(temp >= 1)
		{
			temp /= 10; 
			length++;
		}
	}

	
	switch(length)
	{
	case 4:
		temp_digit = num / 1000; //temp_digit becomes the first digit in the number
		convert_ones_to_word(temp_digit); //covert isolated digit to word and output to screen
		cout << "Thousand "; 
		new_num = (num - (temp_digit*1000)); //subtract the isolated digit * 1000 from the original number and assign it to new_num
		if (new_num == 0)
		{
			break;
		}
	case 3:
		//checks to see if new_num was assigned a value previously(checks to see if the case above it was done)
		//if not, it assigns new_num to the input number
		if (new_num == 0)
		{
			new_num = num;
		}
		temp_digit = new_num / 100; //temp_digit is now the isolated digit
		convert_ones_to_word(temp_digit); //covert isolated digit to word and output to screen
		if(temp_digit==0)
		{
			break;
		}
		else
		{
			cout << "Hundred ";
		}
		new_num = (new_num - (temp_digit*100)); //subtract the isolated digit * 100 from the original number and assign it to new_num
			
	case 2:
		//checks to see if new_num was assigned a value previously(checks to see if the case above it was done)
		//if not, it assigns new_num to the input number
		if (new_num == 0)
		{
			new_num = num;
		}
		temp_digit = new_num / 10; //temp_digit is now the isolated digit	
		new_num = (new_num - (temp_digit*10)); //subtract the isolated digit * 10 from the original number and assign it to new_num

		//if digit is a one then the number is a teen number, set it to true and break out of the switch statement
		//it will be finalized in the next case since teen is set to true. 
		switch(temp_digit)
		{
		case 1:
			teen = true;
			break;
		case 2:
			cout << "Twenty ";
			break;
		case 3:
			cout << "Thirty ";
			break;
		case 4:
			cout << "Forty ";
			break;
		case 5:
			cout << "Fifty ";
			break;
		case 6:
			cout << "Sixty ";
			break;
		case 7:
			cout << "Seventy ";
			break;
		case 8:
			cout << "Eighty ";
			break;
		case 9:
			cout << "Ninety ";
			break;
		}

	case 1:
		//checks to see if new_num was assigned a value previously(checks to see if the case above it was done)
		//if not, it assigns new_num to the input number
		if (new_num == 0)
		{
			new_num = num;
		}
		
		if (teen == true)
		{
			switch(new_num)
			{
			case 0:
				cout << "Ten ";
				break;
			case 1:
				cout << "Eleven ";
				break;
			case 2:
				cout << "Twelve ";
				break;
			case 3:
				cout << "Thirteen ";
				break;
			case 4:
				cout << "Fourteen ";
				break;
			case 5:
				cout << "Fifteen ";
				break;
			case 6:
				cout << "Sixteen ";
				break;
			case 7:
				cout << "Seventeen ";
				break;
			case 8:
				cout << "Eighteen ";
				break;
			case 9:
				cout << "Nineteen ";
				break;
			}
		}
		else
		{
		convert_ones_to_word(new_num);
		}
	teen = false; //reset teen boolean value
	}

	

}


/*
	Name: convert_ones_to_word

	Input:	num			number to be converted 0-9
*/
void convert_ones_to_word(int num)
{
	switch(num)
	{
	case 0:
		break;
	case 1:
		cout << "One ";
		break;
	case 2:
		cout << "Two ";
		break;
	case 3:
		cout << "Three ";
		break;
	case 4:
		cout << "Four ";
		break;
	case 5:
		cout << "Five ";
		break;
	case 6:
		cout << "Six ";
		break;
	case 7:
		cout << "Seven ";
		break;
	case 8:
		cout << "Eight ";
		break;
	case 9:
		cout << "Nine ";
		break;
	}
}

/*
Enter an integer number < 1000: 248
Two Hundred Forty Eight
Press any key to continue . . .
*/