// CSC 134
// MT1
// Cyla
// 4/23/26

#include <iostream>
using namespace std;

// function definitison
void method1();
void method2();

// main
int main() {
    // count the number of cars per day two different ways
    method1();
    method2();

    return 0;
}

// function declarations
void method1() {
    // Method 1 - no arrays
    // Count 5 days cars, get total and average
    cout << "Enter each day's car count." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;

    const int SIZE = 5;
    int count = 0;
    int cars_today;
    int car_total = 0;
    double car_avg = 0;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> cars_today;
        car_total += cars_today;
        count++; // Move to next day
    }

    cout << "Total = " << car_total << endl;
    car_avg = (double) car_total / SIZE;
    cout << "Average = " << car_avg << endl;
}

void method2() {
    // Method 2 uses arrays

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"};
    int cars[SIZE];
    int car_total = 0;
    double car_avg = 0.0;

    for (int i = 0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> cars[i];
    }

    // print output in table format
    cout << "Day\tCars" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        car_total += cars[i];
    }

    // total and average
    car_avg = (double) car_total / SIZE;
    cout << "Total = " << car_total << endl;
    cout << "Average = " << car_avg << endl;

    // ASCII graph
    cout << "\nGraph:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << ": ";
        for (int j = 0; j < cars[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}