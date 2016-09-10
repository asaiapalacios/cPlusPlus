// Play again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main()
{
  char again = 'y';

  while(again == 'y')
  {
    cout << "\n**This breakthrough game has come to an end**";
    cout << "\nShall we try this again? You only live once, you know. (y/n): ";
    cin >> again;
  }
  cout << "\nPeace out, pal. Until next time.\n";
  return 0;
}
