// CSC 134
// M3HW - GOLD
// Cyla
// 3/8/26

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    // seed random number
    srand(time(0));

    //  2 numbers that go from 0 to 9
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    // ask for user input
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;

    //variable
    int answer;

    cin >> answer;

    // output
    if (answer == num1 + num2) {
        cout << "Correct! Good job." << endl;
    } else {
        cout << "Incorrect. We have some practice to do." << endl;
    }

    return 0;
}