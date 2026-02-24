/*
CSC 134
M2H2 GOLD
cyla
2/23/26
*/

//Simulating banking transactions - QUESTION 1

#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    //Variables
    string name;
    double startingBalance = 100,
    depositAmount = 0.0,
    withdrawalAmount = 0.0,
    finalBalance = 0.0;
    int accountNumber = 559042213;

   //Asking for information listed in part 1 of the question
    cout << "Enter your name: " << endl;
    getline(cin, name);
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

    return 0;

}