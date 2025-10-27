//This program uses a function that computes average fuel consumption.
//Group 3 Programmer
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//(1)Function Declaration (prototype)
void CalcAverage();

int main()
{
   CalcAverage();  //Function Call 
   return 0;
}

//(2)Function Definition (Intialization)
void CalcAverage()
{
    const int weeks = 4;                                               //Number of weeks
    double totalMiles[weeks], totalGallons[weeks];                     //Arrays to hold miles and gallons for each week
    double aMiles = 0, aGallons = 0;                                   //These variables gather total miles and gallons

    string startingdate[weeks];                                        //Array to hold starting date(Ex:"Feb 4") for each week

    for (int i = 0; i < weeks; ++i)                                    //Loop to get starting date for each week
    {
       cout << "Enter the starting date for week " << i + 1 << ": ";
	   getline(cin, startingdate[i]);                                  //Get starting date input
    }

    for (int i = 0; i < weeks; ++i)                                     //Loop for each week
    {
        double miles;
        double gallons;

        //(4)Display the week number "[i]" and its 
        // corresponding starting date aka "string"
        cout << "Week " << i + 1 << " (" << startingdate[i] << "):\n";

		//(5)Prompt user 
        cout << "Enter number of miles driven: ";
        cin >> miles;
        cout << "Enter number of gallons used: ";
        cin >> gallons;

        //(6) Update running miles & gallons totals
        aMiles += miles;           
        aGallons += gallons;       

        //(7)Store weekly miles & weekly gallons in array  
        totalMiles[i] = miles;            
        totalGallons[i] = gallons;       
         
		//() Display weekly gas mileage
        cout << "Gas mileage for week " 
             << i + 1 << ": " << fixed << setprecision(2) 
             << miles / gallons << " miles per gallon\n";
        cin.ignore();

        //(8) Display running totals
        cout << "Total miles driven: " << aMiles << endl;
        cout << "Total gallons used: " << aGallons << endl;
        cout << "Overall gas mileage: " << fixed << setprecision(2) 
             << aMiles / aGallons << " miles per gallon\n";
    }
    
    //(9)Format and display table header
    cout << '\n';
    cout << setw(12) << "Week of"
         << setw(10) << "Gallons"
         << setw(10) << "Miles"
         << setw(10) << "Average" << '\n';    //New column
    cout << '\n';

    //(10)Format and display dash lines
    //cout << "\n";
    //cout << setw(12) << "- - - - - - "
    //     << '\n';

    //(11) Display detailed weekly breakdown
    for (int i = 0; i < weeks; ++i)
    {
        //Display weekly data for each week accumulated so far
        //it iterates through all recorded weeks to show the running history
        cout << setw(12) << startingdate[i]
             << setw(10) << totalGallons[i]
             << setw(10) << totalMiles[i]
             << setw(10) << totalMiles[i] / totalGallons[i] << endl;             
    }
    //(12) Display totals row
    cout << setw(12) << "Totals"
         << setw(10) << aGallons
         << setw(10) << aMiles
         << setw(10) << aMiles / aGallons << endl;


}   
        
         
       