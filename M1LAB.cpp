// CSC 134
// M1LAB
// Cyla
// 2/2/26

#include <iostream>
using namespace std;
int main () {

    // this program will simulate an apple orchard
    // the owner's name
    string name = " Cyla Lacuniak";
    // number of apples owned
    int apples = 100;
    // price per apple
    double PricePerApple = 0.25;

    //calculate the total price of the apples

    //print all the information about the orchard

    cout << "Welcome to" << name;
    cout << "'s apple orchard" << endl;
    cout << "We have " << apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << PricePerApple << " each." <<endl;

    //calculate the total cost of the apples
    double totalPrice = apples * PricePerApple;

    //print total price if someone wanted to buy all the apples
    cout << "If you want them all, that will be $" << totalPrice << endl;
}
