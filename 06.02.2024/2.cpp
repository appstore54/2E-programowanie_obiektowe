#include <iostream>
using namespace std;
int fibonacci(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;
  cout << "Podaj numer wyrazu ciągu Fibonacciego: ";
  cin >> n;
  cout << n << "-ty wyraz ciągu Fibonacciego wynosi: " << fibonacci(n) <<endl;
  return 0;
}

