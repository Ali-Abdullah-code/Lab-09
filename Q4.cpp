#include<iostream>
using namespace std;

int main()
{
    int units, tax;
    float bill = 0;

    // Ask the user to enter the number of units consumed
    cout << "Enter units consumed: ";
    cin >> units;

    if(units >= 0)  // Condition to check units are positve or not
    {
        // Calculate the bill for units greater than 600
        if(units > 600)
        {
            units = units - 600;
            bill = bill + units * 27.59;
            units = 600;
        }

        // Calculate the bill for units between 500 and 600
        if(units > 500)
        {
            units = units - 500;
            bill = bill + units * 26.15;
            units = 500;
        }

        // Calculate the bill for units between 400 and 500
        if(units > 400)
        {
            units = units - 400;
            bill = bill + units * 24.91;
            units = 400;
        }

        // Calculate the bill for units between 300 and 400
        if(units > 300)
        {
            units = units - 300;
            bill = bill + units * 24.40;
            units = 300;
        }

        // Calculate the bill for units between 100 and 300
        if(units > 100)
        {
            units = units - 100;
            bill = bill + units * 7;
            units = 100;
        }

        // Charge for the remaining units (100 or less) at the 5 rate
        bill = bill + units * 5;

        // Print the bill before tax
        cout << "Your electricity bill = PKR " << static_cast<int>(bill) << endl;

        // Calculate tax as 10% of the bill
        tax = bill * 10 / 100;
        cout << "Total tax = PKR " << tax << endl;

        // Add the tax to the original bill
        bill = bill + tax;

        // Print the total bill after tax
        cout << "Total Bill(after tax) = PKR " << bill;
    }
    else
        cout << "Invalid input";
}
