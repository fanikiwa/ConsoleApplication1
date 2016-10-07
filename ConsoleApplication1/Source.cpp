
#include "stdafx.h" 
#include <iostream>
#include <iomanip>
#include <string>   

using namespace std;


//int main()
//{
//	cout << "Hello World";
//
//	return 0;
//}


//void main()                  
//{
//	int num, perfect;
//	int per = 0;
//	cout << "enter number \n";
//	cin >> num;
//	int newnum = num;
//	for (int i = 1; i <= num; i++) {
//		if (num%i == 0) {
//			perfect = i;
//			cout << perfect << endl;
//			per = per + perfect;
//		}
//	}
//
//	if (newnum == per / 2) {
//		cout << "perfect";
//	}
//	else {
//		cout << "not perfect";
//	}
//}



//int main()
//{
//	std::string name;
//	std::cout << "What is your name? ";
//	getline(std::cin, name);
//	std::cout << "Hello, " << name << "!\n";
//}



//int main()
//{
//	std::cout << "Hello, world!\n"; 
//#ifdef _DEBUG
//#define new DEBUG_NEW
//#undef THIS_FILE
//	static char THIS_FILE[] = __FILE__;
//#endif 
//	static const char MapName[] = "MemMap1";
//	static const char MutexName[] = "Mutex1"; 
//	bool first = TRUE; 
//}


//int main()
//{
//	std::cout << "Hello, world!\n";
//}



/*
1. Declare variables for month 1, 2, and 3.
2. Declare variable for Total and Average Rainfall
3. Ask user to input name of months.
4. Then ask user to input inches of rain fall.
5. Add all inches and then divide by number of inches asked. In this case, 3.
6. Display average inches of rain for all months to user.
*/

int main()

{
	string month1, month2, month3;//Declared values for months aswell as total and average rainfall. 
	double month1Inch, month2Inch, month3Inch;
	double averageInches;
	double totalInches;
	char c = 'y';

	do
	{

		cout << setprecision(2) << fixed;
		cout << "Enter first month's name:";
		cin >> month1;
		cout << "Enter rain inches for " << month1 << ":";
		cin >> month1Inch;

		cout << "\n";

		cout << "Enter second month's name:";
		cin >> month2;
		cout << "Enter rain inches for " << month2 << ":";
		cin >> month2Inch;

		cout << "\n";

		cout << "Enter third month's name:";
		cin >> month3;
		cout << "Enter rain inches for " << month3 << ":";
		cin >> month3Inch;

		cout << "\n";

		totalInches = (month1Inch + month2Inch + month3Inch);
		averageInches = (totalInches) / 3;//calculating the average

										  //Display calculated data.
		cout << "The average rainfall for " << month1 << ", " << month2 << ", " << "and " << month3 << " is " << averageInches << endl;

		cout << "Would you like to recalculate? Either enter Y to run or N to not." << endl;
		cin >> c;


	} while (c == 'Y' || c == 'y');

	if (c != 'Y' || c != 'y')
		cout << "you must enter the correct choice" << endl;

	system("pause");
	return 0;
}











