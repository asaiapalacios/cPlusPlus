/* C++ PRACTICE */

#include <iostream>
using namespace std;

/**
 * MENU CHOOSER BEFORE START OF GAME
 * Demonstrates the switch statement
 */

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
          cout << "Oops. Looks like you selected a choice outside of the 1,2, and 3 option.\n";
  }
/* GAME BEGINS HERE */

/**
 * SCORE RATER AFTER END OF GAME
 * Demonstrates if else-if else suite
 */

  int score;
  cout << "\nEnter your score: ";
  cin >> score;

  if (score >= 1000) {
    cout << "You scored 1000 or more. Go get it!\n";
  } else if (score >= 500) {
    cout << "You scored 500 or more. Yeah!\n";
  } else if (score >= 250) {
    cout << "You scored 250 or more. All smiles from me!\n";
  } else {
    cout << "Score shmore. Keep going the distance. You got this!\n";
  }

/**
 * PLAY AGAIN
 * Demonstrates while loops
 */

  char again = 'y';

  while(again == 'y') /* will repeat 'play again' question if user inputs 'y' */
  {
    cout << "\n**This breakthrough game has come to an end**";
    cout << "\nShall we try this again? You only live once, you know. (y/n): ";
    cin >> again;
  }
  cout << "\nPeace out, pal. Until next time.\n";
  return 0;
}
