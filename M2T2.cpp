/*
CSC 134
M2T2 
Cyla Lacuniak
16 February 2026

Sales tax will be 8% for this project
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // for this project we are making a receipt printer for a restaurant 
    // declare all of my variables for the project
    string meal_name = "Taco Bowl"; 
    int    num_meals;              // the amount of meals they buy
    double meal_price = 5.99; 
    double sub_total;              // price before tax/ tip
    double tax_rate = 0.08;        // this is 8% - 8% is 8/100 ("per cent")
    double tip_amount;
    double tax_amount;             // $ of the actual tax charged
    double total_price;            // subtotal + tip + tax


    // get user input
    cout << "Welcome to Cyla's Taco Fiesta! " << endl;
    cout << "Today's special is the " << meal_name << endl; 
    cout << endl;
    cout << "How many would you like to buy today? ";
    cin >> num_meals; 
    cout << "Tip amount>? (min 0)" << endl; 
    cin >> tip_amount;


    // do the calculation
    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate;  // this is the amount that is added to the bill
    // add tax and tips
    total_price = sub_total + tip_amount + tax_amount;

    // present the output with two decimal places
    cout << setprecision(2) << fixed; // remember to import <iomanip> 
    cout << "YOUR ORDER " << endl << "--------------------"<< endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t$" << sub_total << endl;
    cout << "Tip: \t\t$" << tip_amount << endl;
    cout << "Tax: \t\t$" << tax_amount << endl;
    cout << "------------------------" << endl;
    cout << "Total: \t\t$" << total_price << endl;
    cout << "THANK YOU FOR COMING" << endl;


    return 0; // no erros









}