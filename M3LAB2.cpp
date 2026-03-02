// CSC 134
// M3LAB2
// Cyla
// 3/01/26

#include <iostream>
using namespace std;


int main() {

//this program will computer letter grades for numberical values entered by a student

//variables
int grade;

//ask them what their numerical grade is
cout << "Please enter your numerical grade and I will compute your letter grade." << endl;
cin >> grade;

//add if statements

if (grade >= 90 && grade <= 100) {
    cout << "Your letter grade is an A." << endl;
}
else if (grade >= 80 && grade <= 89) {
    cout << "Your letter grade is a B." << endl;
}
else if (grade >= 70 && grade <= 79) {
    cout << "Your letter grade is a C." << endl;
}
else if (grade >= 60 && grade <= 69) {
    cout << "Your Letter grade is a D." << endl;
}
else if (grade >= 0 && grade <= 59) {
    cout << "Your letter grade is an F." << endl;
}

else {
    cout << "Please type a valid entry." << endl;
}


return 0;
}
