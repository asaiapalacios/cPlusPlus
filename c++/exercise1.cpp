#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int one, two, three, average;

  cout << "Bienvenidos chicos y chicas :D\n";
  cout << "Favor de ingresar su information. \n";

  cout << "Su primer nota: ";
  cin >> one;

  cout << "Su segunda nota: ";
  cin << two;

  cout << "Su tercer nota: ";
  cin << three;

  average = (one + two + three) / 3

  cout << "Su promedio es: " << average;

  return 0;
}
