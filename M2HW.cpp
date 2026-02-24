/*
CSC 134
M2H2 GOLD
cyla
2/23/26
*/

//Simulating banking transactions

#include <iostream>
#include<iomanip>

using namespace std;

void bankingProgram() {

    //Variables
    string name;
    double startingBalance = 100,
    depositAmount = 0.0,
    withdrawalAmount = 0.0,
    finalBalance = 0.0;
    int accountNumber = 559042213;

   //Asking for information listed in part 1 of the question
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << fixed << setprecision(2);
    cout << "Balance: $" << startingBalance << endl;
    cout << "Deposit Amount: " << endl;
    cin >> depositAmount;
    cout << "Withdrawal Amount: " << endl;
    cin >> withdrawalAmount;
    
    //Printing out information at end of transaction
    cout << "Account Owner: " << name << endl;
    cout << "Account Number: " << accountNumber << endl; 
    
    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    cout << "Remaining Balance: $" << finalBalance << endl;

}










void crateProgram() {
    // constants for the amount of the product and then the amount charged
const double COST_PER_CUBIC_FOOT = .30;
const double CHARGE_PER_CUBIC_FOOT = .52;

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

}









void pizzaProgram() {

//This program will simulate a pizza party

//variables
    int pizzas,
    slices_per_pizza,
    visitors;

//Print information about pizza party

    cout << "Enter number of pizzas: " << endl;
    cin >> pizzas;
    cout << "Enter number of slices per pizza: " << endl;
    cin >> slices_per_pizza;
    cout << "Enter the amount of visitors: " << endl;
    cin >> visitors;

//Calculate how many slices per pizza
    int totalslices = pizzas * slices_per_pizza;

//Calculate how many slices are needed per visitor
    int totalneeded = visitors * 3;

//Calculate leftover amount

    int leftover = totalslices - totalneeded;

    cout << "Slices left over: " << leftover << endl;
}









void cheerProgram() {

//This program will simulate a cheer for FTCC

//variables

    string letsGo = "Let's go";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne, cheerTwo;

//String concentration
    cheerOne = letsGo + " " + school;  // "Let's go FTCC"
    cheerTwo = letsGo + " " + team;    // "Let's go Trojans"

    // Step 3: Print the cheers
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
}









int main() {

    int choice;

    cout << "Choose a program to run:\n";
    cout << "1. Banking Program\n";
    cout << "2. Crate Profit Program\n";
    cout << "3. Pizza Program\n";
    cout << "4. Cheer Program\n";
    cout << "Enter choice (1 or 2 or 3 or 4): ";
    cin >> choice;

    if (choice == 1) {
        bankingProgram();
    }
    else if (choice == 2) {
        crateProgram();
    }
    else if (choice == 3) {
        pizzaProgram();
    }
    else if (choice ==4) {
        cheerProgram();
    }
    else {
        cout << "Invalid choice.\n";
    }

    return 0;
}