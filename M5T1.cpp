// CSC 134
// M5T1
// Cyla
// 3/30/26

#include <iostream>
using namespace std;

// Function Prototypes
void say_hello();
int give_the_answer();

int main()
{
    cout << "Hello from main()" << endl;

    // call void function
    say_hello();

    // call value-returning function
    int answer = give_the_answer();
    cout << "The answer is: " << answer << endl;

    return 0;
}

// Void function
void say_hello() {
    cout << "Hi from say_hello()" << endl;
}

// Value-returning function
int give_the_answer() {
    return 42;
}