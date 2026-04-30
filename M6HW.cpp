// CSC 134
// M6HW1
// Cyla
// 3/30/26



#include <iostream>
using namespace std;

class RiddleGame {
private:
    int choice;
    int choice2;
    bool hasKey = false;

public:
    void play() {

        //this program is a choose your own adventure game

        cout << "Welcome to Cyla's riddle forest!" << endl;
        cout << "You have to answer a series of riddles to win." << endl;
        cout << "One incorrect answer leads to defeat." << endl;
        cout << "Two correct answers leads to victory." << endl;

        // NEW: simple extra decision (for key)
        cout << "\nBefore you begin, you see a box on the ground." << endl;
        cout << "Choose 1 to open it or 2 to ignore it." << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "You found a key!" << endl;
            hasKey = true;
        }
        else if (choice == 2) {
            cout << "You ignore the box." << endl;
        }
        else {
            cout << "That is not an option. Please try again." << endl;
            return;
        }

        // ORIGINAL FIRST RIDDLE
        cout << "\nWhat is tall and young, but short and old?" << endl;
        cout << "Your options are: a candle and a tree." << endl;
        cout << "Choose 1 for a candle and choose 2 for a tree." << endl;
        cin >> choice;

        if (1 == choice) {
            cout << "You chose a candle." << endl;
            cout << "You are.... Safe! You will move on to the second question." << endl;

            cout << "Second riddle!" << endl;
            cout << "What shaves every day, but their beard stays the same?" << endl;
            cout << "Choose 1 for a barber and 2 for a razor." << endl;
            cin >> choice2;

            if (choice2 == 1) {
                cout << "Correct! You solved both riddles!" << endl;

                // NEW: ending with lock & key
                cout << "\nYou reach a locked gate at the end of the forest." << endl;

                if (hasKey) {
                    cout << "You use the key to open the gate." << endl;
                    cout << "You have achieved victory!" << endl;
                }
                else {
                    cout << "The gate is locked and you have no key." << endl;
                    cout << "You lose. Better luck next time!" << endl;
                }
            }
            else if (choice2 == 2) {
                cout << "You chose a razor. Very close! But not the answer." << endl;
                cout << "You lose. Better luck next time!" << endl;
            }
            else {
                cout << "That is not an option." << endl;
            }
        }
        else if (2 == choice) {
            cout << "You chose a tree." << endl;
            cout << "You lose. Better luck next time!" << endl;
        }
        else {
            cout << "That is not an option. Please try again." << endl;
        }
    }
};

int main() {
    RiddleGame game;
    game.play();
    return 0;
}