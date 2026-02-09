// CSC 134
// M1LAB
// Cyla
// 2/2/26

#include <iostream>
using namespace std;
int main () {

    // this program will simulate a book store
    // the owner's name

    // price per book

    
    string first_name, last_name, full_name; //holds customer name
    string product = "book"; //change to whatever product you are selling
    double cost_each = 12.99;
    double total_cost;

    cout << "Welcome to our " << product << " store! " << endl;
    cout << "What is your first name?" << endl;
    cin >> first_name;
    cout << "And what is your last name?" << endl;
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " <<  full_name << endl;
}