// CSC 134
// M3HW - GOLD
// Cyla
// 3/8/26

//QUESTION 1

#include <iostream>
using namespace std;

//functions that exist but must be defind later on
void chooseyes();
void chooseno();

int main() {

//variables
string choice;

cout << "Hello, I am a C++ program." << endl;
cout << "Are you having a good day?" << endl;
cout << "Please type yes or no." << endl;
cin >> choice;

//add if statements

if (choice == "yes") {
    chooseyes();
}
else if (choice == "no") {
    chooseno();
}
else {
    cout << "That is not an option." << endl;
}
    return 0;

}
//Now we can define those previous functions
void chooseyes() {
    cout << "I am so happy to hear that!" << endl;
}
void chooseno() {
    cout << "I am sorry to hear that. I hope it gets better for you." << endl;
}





