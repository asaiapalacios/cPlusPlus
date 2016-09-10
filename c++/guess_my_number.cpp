// Guess My Number
// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(0))); // seed random number generator

  int secretNumber = rand() % 100 + 1; // random number between 1 and 100
  int tries = 0;
  int guess;

  cout << "\tWelcome to Guess My Number\n\n";

  do {
    cout << "Enter a guess: ";
    cin >> guess;
    ++tries;

    if (guess > secretNumber) {
      cout << "Yikes. Too high. Give it another shot.\n\n";
    } else if (guess < secretNumber) {
      cout << "A bit too low, but not to worry. Try again.\n\n";
    } else {
      cout << "\nWoah! You got it! Way to go Idaho! In " << tries << " guesses. Pretty cool, you know!\n";
    }
  } while (guess != secretNumber);
  return 0;
}
