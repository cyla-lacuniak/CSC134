// CSC 134
// M2T1
// Cyla
// 2/8/26

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
    int amount;

    cout << "Welcome to our " << product << " store! " << endl;
    cout << "What is your first name?" << endl;
    cin >> first_name;
    cout << "And what is your last name?" << endl;
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " <<  full_name << endl;

    //ask them how many they would like to buy

    cout << "How many " << product << " would you like to buy?" << endl;
    cin >> amount;

    //calculate total price of the amount of books they want to buy

    total_cost = cost_each * amount;
    
    //tell them for the amount of books they want to buy 

    cout << "For " << amount << " books" << endl;

    //tell them how much it will cost 

    cout << "That will cost $" << total_cost << endl;

    cout << "Thank you for shopping with us!" << endl;




}