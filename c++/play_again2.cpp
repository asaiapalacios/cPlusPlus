// Play Again 2.0
// Demonstrates do loops

#include <iostream>

using namespace std;

int main()
{
  char again;

  do {
    cout << "\n**This breakthrough game has come to an end**";
    cout << "\nShall we try this again? You only live once, you know. (y/n): ";
    cin >> again;
  } while (again == 'y');
  cout << "\nPeace out, pal. Until next time.\n";
  return 0;
}
