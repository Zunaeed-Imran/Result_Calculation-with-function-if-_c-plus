#include <iostream>
#include <string>
using namespace std;

void Result(int n) {
if (n >= 90 && n <= 100) {
    cout << "you have got GOLDEN A+ ";
  }

  if (n >= 80 && n <= 89){
    cout << "you have got A+ ";
  }

  if (n >= 70 && n <= 79){
    cout << "you have got A ";
  }

  if (n >= 60 && n <= 69){
    cout << "you have got A -";
  }

  if (n >= 50 && n <= 59) {
    cout << "You have got B ";
  }
  if (n >= 40 && n <=49 ) {
    cout << "you have earn C ";
  }
  
  if (n >= 33 && n <= 39) {
    cout << "You have passed ";
  }
  
  if (n >= 1 && n <= 32) {
    cout << " you have faield ";
  }
}

int main () {
  int n;

  cout << "Enter Result Marks: ";
  cin >> n;

  Result(n);

  return 0;
}