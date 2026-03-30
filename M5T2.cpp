// CSC 134
// M5T2
// Cyla
// 3/30/26

#include <iostream>
using namespace std;

// Functions
int square(int num);
void printAnswerLine(int num, int squared);

int main() {
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        int result = square(i);          // get square
        printAnswerLine(i, result);      // print result
    }

    return 0;
}
// Value function
int square(int num) {
    return num * num;
}
// VoiD function
void printAnswerLine(int num, int squared) {
    cout << num << " squared = " << squared << endl;
}