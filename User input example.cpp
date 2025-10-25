//This program uses a function that computes average fuel consumption.
//Group 3 Programmer
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//Function Declaration (prototype)
void CalcAverage();

int main()
{
   CalcAverage();  //Function Call 
   return 0;

}


//Function Definition (Intialization)
//Calculates mileage for each week
void CalcAverage()
{
    const int weeks = 4;                            //Number of weeks
    double totalMiles[weeks], totalGallons[weeks];  //Arrays to hold miles and gallons for each week
    double aMiles = 0, aGallons = 0;                //These variables gather total miles and gallons

    string startingdate[weeks];                     //Array to hold starting date(Ex:"Feb 4") for each week

    for (int i = 0; i < weeks; ++i)                 //Loop to get starting date for each week
    {
        cout << "Enter the starting date for week " << i + 1 << ": ";
        getline(cin, startingdate[i]);


    }

    for (int i = 0; i < weeks; ++i)                //Loop for each week
    {
        // Variables for current week's data
        double miles;
        double gallons;

        // Display the week number "[i]" and its corresponding starting date aka "string"
        cout << "Week " << i + 1 << " (" << startingdate[i] << "):\n";

        cout << "Enter number of miles driven: ";
        cin >> miles;

        cout << "Enter number of gallons used: ";
        cin >> gallons;

        aMiles += miles;                         // Update running miles totals
        aGallons += gallons;                     // Update running gallons totals

        
        totalMiles[i] = miles;                   // Store weekly miles in array for later calculations and reporting        
        totalGallons[i] = gallons;               // Store weekly gallons in array for later calculations and reporting        
          


        cout << "Gas mileage for week " << i + 1 << ": " << fixed << setprecision(2) << miles / gallons << " miles per gallon\n";
        cin.ignore();

        // Display running totals
        cout << "Total miles driven: " << aMiles << endl;
        cout << "Total gallons used: " << aGallons << endl;

        cout << "Overall gas mileage: " << fixed << setprecision(2) << aMiles / aGallons << " miles per gallon\n";


    }
    
    // Format and display table header
    cout << '\n';
    cout << setw(12) << "Week of"
         << setw(10) << "Gallons"
         << setw(10) << "Miles"
         << setw(10) << "Average" << '\n';    //New column
    cout << '\n';

    // Format and display dash lines
    cout << setw(10) << "- - - - - - ";
    cout << '\n';
      // << setw(10) << "Gallons"
      // << setw(10) << "Miles"
      // << setw(10) << "Average" << '\n';    //New column

    

    // Display detailed weekly breakdown
    for (int i = 0; i < weeks; ++i)
    {
            // Inner loop - Display weekly data for each week accumulated so far
            // This loop iterates through all recorded weeks to show the running history
            cout << setw(12) << startingdate[i]
                 << setw(10) << totalGallons[i]
                 << setw(10) << totalMiles[i]
                 << setw(10) << totalMiles[i] / totalGallons[i] << endl;       
            
    }
   
    // Display running totals row
    cout << setw(12) << "Totals"
        << setw(10) << aGallons
        << setw(10) << aMiles
        << setw(10) << aMiles / aGallons << endl;



}   
        
         
       