// Score Rater 3.0
// Demonstrates if else-if else suite

#include <iostream>
using namespace std;

int main()
{
  int score;
  cout << "Enter your score: ";
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
  return 0;
}
