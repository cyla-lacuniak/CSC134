// CSC 134
// M3T1
// Cyla
// 2/28/26

#include <iostream>
using namespace std;

int main () {

//variables
double len1, wid1, len2, wid2;
double area1, area2;

//ask the user to display the length and width of two rectangles
cout << "Please enter the lenth of the first rectangle\n";
cin >> len1; 
cout << "Please enter the height of the first rectangle\n";
cin >> wid1;
cout << "Please enter the length of the second rectangle\n";
cin >> len2;
cout << "Please enter the width of the second rectangle\n";
cin >> wid2;

//calculate answer

area1 = len1 * wid1,
area2 = len2 * wid2;

//Display answer

cout << "The first rectangle has an area of: " << area1 << endl;

cout << "The second rectangle has an area of: " << area2 << endl;


return 0;

}