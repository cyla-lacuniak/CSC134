// CSC 134
// M5LAB1
// Cyla
// 3/30/26

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_inside_house();
void choice_run_away();
void choice_find_treasure();

int main() {
  cout << "Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  int choice;

  // LOOP for input validation
  while (true) {
    cout << "\nMain Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (choice == 1) {
      choice_front_door();
      break;
    } 
    else if (choice == 2) {
      choice_back_door();
      break;
    } 
    else if (choice == 3) {
      choice_go_home();
      break;
    } 
    else if (choice == 4) {
      cout << "Ok, quitting game" << endl;
      return;
    } 
    else {
      cout << "Invalid choice. Please choose 1–4." << endl;
      cin.clear();
      cin.ignore(1000, '\n');
    }
  }
}

// Functions

void choice_front_door() {
  cout << "\nYou try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    choice_back_door();
  } 
  else if (choice == 2) {
    choice_go_home();
  }
}

void choice_back_door() {
  cout << "\nYou sneak around to the back..." << endl;
  cout << "You find the door slightly open." << endl;
  cout << "Do you:" << endl;
  cout << "1. Go inside" << endl;
  cout << "2. Run away" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    choice_inside_house();
  } 
  else if (choice == 2) {
    choice_run_away();
  }
}

void choice_inside_house() {
  cout << "\nYou walk inside the dark house..." << endl;
  cout << "You see something shiny in the corner." << endl;
  cout << "Do you:" << endl;
  cout << "1. Investigate the shiny object" << endl;
  cout << "2. Panic and run away" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (choice == 1) {
    choice_find_treasure();
  } 
  else if (choice == 2) {
    choice_run_away();
  }
}

void choice_find_treasure() {
  cout << "\nYou found treasure!" << endl;
  cout << "Congratulations, you win!" << endl;
}

void choice_run_away() {
  cout << "\nYou run away safely." << endl;
  cout << "Good choice!" << endl;
}

void choice_go_home() {
  cout << "\nYou go home." << endl;
  cout << "Crisis avoided!" << endl;
}