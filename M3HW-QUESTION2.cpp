// CSC 134
// M3HW - GOLD
// Cyla
// 3/8/26

//QUESTION 2

#include <iostream>
#include <iomanip>
using namespace std;

//Ask them to enter the price of the meal.
//Ask them if the order is dine in or takeaway. 
//If the order is dine in, add a 15% tip. 
//Then print the meal price, the tax, the tip

int main() {
    // receipt program
    // declare all of my variables for the project

    string choice;                 // using option 1 and 2 for dining in or takeaway
    double price;                  // price before tax/tip - amount entered by customer
    double tax_rate = 0.08;        // tax will be 8 percent
    double tip_amount;             // optional tip amount - for takeaway only
    double tax_amount;             // $ of the actual tax charged
    double total_price;            // subtotal + tip + tax - for takeaway only
    double mandatory_tip = 0.15;   // mandatory tip - 15 percent mandatory tip for dining in
    double total_price2;           // subtotal + mandatory tip + tax - for takeaway onlu
    double mandatory_tip_total;    // mandatory tip + price of the mean - for dining in

    // get user input
    cout << "Welcome to Cyla's Taco Fiesta! " << endl;
    cout << "Will you be dining in or ordering takeaway? " << endl; 
    cout << "Choose 1 for dining in or 2 for takeaway." << endl;
    cin >> choice;

if (choice == "1") {
    cout << "That will include a mandatory 15 percent tip." << endl;
    cout << "Please enter the price of the meal." << endl;
    cin >> price;

    //calculations for dining in
    tax_amount = price * tax_rate;
    mandatory_tip_total = mandatory_tip * price;
    total_price2 = price + mandatory_tip_total + tax_amount; 

    cout << setprecision(2) << fixed;
    cout << "YOUR ORDER " << endl << "--------------------"<< endl;
    cout << "Subtotal: \t$" << price << endl;
    cout << "Tip: \t\t$" << mandatory_tip_total << endl;
    cout << "Tax: \t\t$" << tax_amount << endl;
    cout << "------------------------" << endl;
    cout << "Total: \t\t$" << total_price2 << endl;
    cout << "THANK YOU FOR COMING" << endl;
}
else if (choice == "2") {
    cout << "Please enter the price of the meal." << endl;
    cin >> price;
    cout << "Tip amount>? (min 0)" << endl; 
    cin >> tip_amount;

    //calculations for takeaway
    tax_amount = price * tax_rate;
    total_price = price + tip_amount + tax_amount;

    cout << setprecision(2) << fixed;
    cout << "YOUR ORDER " << endl << "--------------------"<< endl;
    cout << "Subtotal: \t$" << price << endl;
    cout << "Tip: \t\t$" << tip_amount << endl;
    cout << "Tax: \t\t$" << tax_amount << endl;
    cout << "------------------------" << endl;
    cout << "Total: \t\t$" << total_price << endl;
    cout << "THANK YOU FOR COMING" << endl;
}
else {
    cout << "You can only dine in or take away." << endl;
}
    return 0; // no errors
}