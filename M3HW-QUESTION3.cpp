// CSC 134
// M3HW - GOLD
// Cyla
// 3/8/26

//QUESTION 3

#include <iostream>
using namespace std;

int main() {

//this program is a choose your own adventure game

//variables
int choice;
int choice2;

cout << "Welcome to Cyla's riddle forest!" << endl;
cout << "You have to answer a series of riddles to win." << endl;
cout << "One incorrect answer leads to defeat." << endl;
cout << "Two correct answers leads to victory." << endl;

//ask them the first question

cout << "What is tall and young, but short and old?" << endl;
cout << "Your options are: a candle and a tree." << endl;
cout << "Choose 1 for a candle and choose 2 for a tree." << endl;
cin >> choice;

//add if statements

if (1 == choice) {
    cout << "You chose a candle." << endl;
    cout << "You are.... Safe! You will move on to the second question." << endl;

        cout << "Second riddle!" << endl;
        cout << "What shaves every day, but their beard stays the same?" << endl;
        cout << "Choose 1 for a barber and 2 for a razor." << endl;
        cin >> choice2;

        if (choice2 == 1) {
            cout << "Correct! You solved both riddles! You have achieved victory!" << endl;
        }
        else if (choice2 == 2) {
            cout << "You chose a razor. Very close! But not the answer." << endl;
            cout << "You lose. Better luck next time!" << endl;
        }
        else {
            cout << "That is not an option." << endl;
        }
    }
else if (2 == choice) {
    cout << "You chose a tree." << endl;
    cout << "You lose. Better luck next time!" << endl;
}
else {
    cout << "That is not an option. Please try again." << endl;
}

return 0;
}

