// CSC 134
// M3T2
// Cyla
// 2/28/26

#include <iostream>
//for pseudo-random numbers
#include <cmath>
//for making it ruly random
#include <ctime>
using namespace std;

int main() {

cout << "Let's roll some dice!" << endl;
int seed = time(0);
//cout << " Your seed is: " << seed << endl;
cout << "What's your lucky number? ";
//cin >> seed;
//Seed the RNG
srand (seed);

const int MAX = 6; //numbers 1-6 like on a normal die
int roll1, roll2, total;
roll1 = (rand() % MAX) +1; // Divide MAX, and just keep the remainder
cout << "Your roll was: " << roll1 << endl;

roll2 = (rand() % MAX) +1; // Divide MAX, and just keep the remainder
cout << "Your roll was: " << roll2 << endl;

total = roll1 + roll2;

cout << "Your total roll is: " << total << endl;

//Let's play craps!
//7 and 11 - win!
//2 and 12 - lose!
// anything else -- comes later.

if (total == 7) {
    cout << "Lucky seven! You win!" << endl;
}
else if (total == 11) {
    cout << "Eleven is a winner!" << endl;
}
else if (total == 2) {
    cout << "Snake eyes! Sorry, you lose." << endl;
}
else if (total == 3) {
    cout << "Sorry, three is unlucky, you lose." << endl;
}
else if (total == 12) {
    cout << "Boxcars! Sorry, you lose." << endl;
}
else {
//anything else
    cout << "Your Point is: " << total << " but we will do that part later" << endl;
}
    return 0;

}