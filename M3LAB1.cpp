// CSC 134
// M3T2
// Cyla
// 3/01/26

#include <iostream>
using namespace std;



//functions that exist but must be defind later on
void choosePlate1();
void choosePlate2();
void choosePlate3();

int main() {

//this program will be based off of a game show where participants must choose certain options

//variables
int choice;

cout << "Welcome to the Mystery Plate Game Show!" << endl;
cout << "You have the option to pick from three plates." << endl;
cout << "Two plates are safe, and one.... is poison." << endl;
cout << "Where the reward can be great.. or deadly." << endl;

//ask them what they choose

cout << "Do you choose Plate 1 or Plate 2 or Plate 3?" << endl;
cout << "Type 1, 2, or 3" << endl;
cin >> choice;

//add if statements

if (1 == choice) {
    choosePlate1();
}
else if (2 == choice) {
    choosePlate2();
}
else if (3 == choice) {
    choosePlate3();
}
else {
    cout << "That is not an option." << endl;
}

cout << "Thanks for playing!" << endl;

return 0;
}

//Now we can define those previous functions

void choosePlate1() {
    cout << "You chose Plate 1." << endl;
    cout << "You are.... Safe! You win 1 million dollars!" << endl;
}

void choosePlate2() {
    cout << "You chose Plate 2." << endl;
    cout << "You are.... Safe! You win 5 million dollars!" << endl;
}

void choosePlate3() {
    cout << "You chose Plate 3." << endl;
    cout << "You are.... almost certainly about to croak!" << endl;
    cout << "You chose the plate with posion, you lose!" << endl;
}