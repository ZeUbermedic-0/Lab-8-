//Breakout section of block code (just for notes)
//Loop through array and display data
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


int main()
{


/*  std::cout << std::setw(12) << "Week of"
		      << std::setw(10) << "Gallons"
		      << std::setw(10) << "Miles"
		      << std::setw(10) << "Average" << '\n';
*/
    
    const int weeks = 4;                            //Number of weeks
    double totalMiles[weeks], totalGallons[weeks];  //Arrays to hold miles and gallons for each week
    double aMiles = 0, aGallons = 0;                //These variables gather total miles and gallons

    string startingdate[weeks];

    for (int j = 0; j < weeks; ++j)
    {
        // Inner loop - Display weekly data for each week accumulated so far
        // This loop iterates through all recorded weeks to show the running history
        cout<< setw(12) << startingdate[j]
            << setw(10) << totalGallons[j]
            << setw(10) << totalMiles[j]
            << setw(10) << totalMiles[j] / totalGallons[j] << endl;
    }



	return 0;
}