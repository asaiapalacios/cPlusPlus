// Menu Chooser
// Demonstrates the switch statement

#include <iostream>

using namespace std;

int main()
{
  cout << "Level of Difficulty. You decide.\n\n";
  cout << "1 - Easy Peasy\n";
  cout << "2 - Normal, the Name of the Game\n";
  cout << "3 - Do or Die. Yeah!\n\n";

  int choice;
  cout << "Select Level of Difficulty: ";
  cin >> choice;

  switch (choice) {
    case 1:
          cout << "You picked 'Easy Peasy.' Not too shabby my friend.\n";
          break;
    case 2:
          cout << "You picked 'Normal, the Name of the Game.' Coolio.\n";
          break;
    case 3:
          cout << "Damn. You ready for 'Do or Die?' I trust you.\n";
          break;
    default:
          cout << "Oops. Looks like you selected a choice outside of the 1,2, and 3 option. Try again buddy.\n";
  }
  return 0;
}
