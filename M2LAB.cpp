/*
CSC 134
M2LAB
cyla
2/22/26
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
// constants for the amount of the product and then the amount charged
const double COST_PER_CUBIC_FOOT = .23;
const double CHARGE_PER_CUBIC_FOOT = .5;

// variables

double length,   //length of the crate
       width,    //width of the crate
       height,   //height of the crate
       volume,   //volume of the crate
       cost,     //cost to build the crate
       charge,   //what the costumer is charged for the crate
       profit;   //the profit made on the crate

//set the desired output for formatting the numbers

cout << setprecision(2) << fixed << showpoint;

//prompt the user for the crate's length, width and height
cout << "Enter the deminsions of the crate (in feet):\n";
cout << "Length:\n",
cin >> length;
cout << "Width:\n";
cin >> width;
cout << "Height:\n";
cin >> height;

//calculate the crate's volume and the cost to produce it
volume = length * width * height;

//calculate the charge to the customer
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;

//calculate the profit
profit = charge - cost;

//display the calculated data
cout << "The volume of the crate is: " << volume << " cubic feet.\n";

cout << "Cost to build: $" <<  cost << endl;

cout << "Charge to customer: $" << charge << endl;

cout << "Profit: $" << profit << endl;

return 0;
}