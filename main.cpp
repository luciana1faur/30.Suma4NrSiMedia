#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double nr1, nr2, nr3, nr4;
  double suma;
  double media;

  cout << "Compute the total and average of four numbers :" << endl;
  cout << "---------------------------------" << endl;

  cout << "Introduceti primele doua numere: ";
  cin >> nr1 >> nr2;

  cout << "Introduceti al 3-lea si al 4-lea nr: ";
  cin >> nr3 >> nr4;

  suma = nr1 + nr2 + nr3 + nr4;
  media = suma / 4;

  cout << "Suma celor 4 numere este: " << suma << endl;
  cout << "Media celor 4 numere este: " << media << endl;

  return 0;
}
//Compute the total and average of four numbers :