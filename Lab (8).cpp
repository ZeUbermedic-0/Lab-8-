//Breakout section of block code (just for notes)
//User input into array pratice
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


int main()
{
	const int weeks = 4;                            //Number of weeks
	double totalMiles[weeks], totalGallons[weeks];  //Arrays to hold miles and gallons for each week
	double aMiles = 0, aGallons = 0;                //These variables gather total miles and gallons

	string startingdate[weeks];
	

	for (int i = 0; i < weeks; ++i)
	{
		cout << "Enter the starting date for week " << i + 1 << ": ";
		getline(cin, startingdate[i]);

	
	}
	

}