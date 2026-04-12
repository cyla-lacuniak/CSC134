// CSC 134
// M5HW1 - GOLD
// Cyla
// 4/12/26

#include <iostream>
#include <iomanip>
using namespace std;

// Question 1
void question1() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter month: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << ": ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for "
         << m1 << ", " << m2 << ", and " << m3
         << " is " << avg << " inches.\n";
}

// Question 2
void question2() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "All values must be greater than zero.\n";
        return;
    }

    double volume = width * length * height;
    cout << "Volume = " << volume << endl;
}

// Question 3
void question3() {
    int num;

    cout << "Enter a number (1 - 10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Invalid number. Please enter 1 through 10.\n";
        return;
    }

    switch (num) {
        case 1: cout << "I\n"; break;
        case 2: cout << "II\n"; break;
        case 3: cout << "III\n"; break;
        case 4: cout << "IV\n"; break;
        case 5: cout << "V\n"; break;
        case 6: cout << "VI\n"; break;
        case 7: cout << "VII\n"; break;
        case 8: cout << "VIII\n"; break;
        case 9: cout << "IX\n"; break;
        case 10: cout << "X\n"; break;
    }
}

// Question 4
void question4() {
    int choice;
    cout << "Geometry Calculator\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4.\n";
        return;
    }

    if (choice == 1) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        if (r < 0) {
            cout << "The radius cannot be less than zero.\n";
            return;
        }
        cout << "Area = " << 3.14159 * r * r << endl;
    }
    else if (choice == 2) {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        if (l < 0 || w < 0) {
            cout << "Values must be positive.\n";
            return;
        }
        cout << "Area = " << l * w << endl;
    }
    else if (choice == 3) {
        double b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        if (b < 0 || h < 0) {
            cout << "Only enter positive values.\n";
            return;
        }
        cout << "Area = " << 0.5 * b * h << endl;
    }
}

// Question 5
void question5() {
    double speed;
    int hours;

    cout << "Speed (mph): ";
    cin >> speed;
    cout << "Hours traveled: ";
    cin >> hours;

    if (speed < 0 || hours < 1) {
        cout << "Invalid input.\n";
        return;
    }

    cout << "Hour  Distance\n";
    for (int i = 1; i <= hours; i++) {
        cout << i << "     " << speed * i << endl;
    }
}

// Question 6
int main() {
    int choice;

    do {
        cout << "\nMenu\n";
        cout << "1. Average Rainfall\n";
        cout << "2. Volume of Block\n";
        cout << "3. Roman Numerals\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) question1();
        else if (choice == 2) question2();
        else if (choice == 3) question3();
        else if (choice == 4) question4();
        else if (choice == 5) question5();
        else if (choice == 6) cout << "Goodbye!\n";
        else cout << "Invalid choice.\n";

    } while (choice != 6);

    return 0;
}