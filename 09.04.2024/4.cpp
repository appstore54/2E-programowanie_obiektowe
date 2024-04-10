#include <iostream>
#include <cstdlib>
#include <ctime>
#include<cmath>
using namespace std;

int main() {
    srand(time(NULL));

    double liczba = (rand() % 9000 + 1000) / 1000.0; 
    cout << "Liczba rzeczywista: " << liczba << endl;
    cout << "Zaokrąglona do najbliższej liczby całkowitej: " << round(liczba) << endl;

    return 0;
}
