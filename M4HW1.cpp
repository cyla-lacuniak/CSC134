// CSC 134
// M4H1 (GOLD)
// Cyla
// 3/15/26

#include <iostream>
using namespace std;

int main() {

// declare variables
int firstNum, answer;

//ask for user input and do a loop until use enters a valid number 

cout << "Enter a number from 1 to 12." << endl;
cin >> firstNum;

//loop
while (firstNum < 1 || firstNum > 12) {
    cout << "Invalid number. Enter a number from 1 to 12." << endl;
    cin >> firstNum;
}


for (int i=1; i<= 12; i++) {
    answer = firstNum * i;
    cout << firstNum << " times " << i << " equals " << answer << endl;
}

    return 0;
}