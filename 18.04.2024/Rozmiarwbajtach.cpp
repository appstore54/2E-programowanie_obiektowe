#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream plik("C:/Users/Uczen/Desktop/Start.txt");
	plik.seekg(0, ios::end);

	int dlugosc;
	dlugosc = plik.tellg();

	cout << "Dlugosc pliku w bajtach wynosi: " << dlugosc << "bajtow" << endl;

	return 0;
}