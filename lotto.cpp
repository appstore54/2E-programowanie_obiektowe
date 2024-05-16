
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <istream>
#include <string>
using namespace std;

void wyczyscBufor() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void wygenerujLosoweLiczby(vector<int>& liczby) {
    liczby.clear();
    srand(static_cast<unsigned int>(time(nullptr)));
    while (liczby.size() < 6) {
        int num = (rand() % 49) + 1;
        if (find(liczby.begin(), liczby.end(), num) == liczby.end()) {
            liczby.push_back(num);
        }
    }
    sort(liczby.begin(), liczby.end());
}

void zapiszLiczbyDoPliku(const string& nazwaPliku, const vector<int>& liczby) {
    ofstream plik(nazwaPliku, ios::app);
    if (plik.is_open()) {
        for (int num : liczby) {
            plik << num << " ";
        }
        plik << "\n";
        plik.close();
    }
    else {
        cerr << "Blad: Nie mozna otworzyc pliku do zapisu: " << nazwaPliku << endl;
    }
}

void pobierzLiczbyUzytkownika(vector<int>& liczby) {
    liczby.clear();
    std::cout << "Podaj 6 unikalnych liczb z zakresu od 1 do 49:" << endl;
    for (int i = 0; i < 6; ++i) {
        int num;
        cin >> num;
        if (cin.fail() || num < 1 || num > 49 || find(liczby.begin(), liczby.end(), num) != liczby.end()) {
            std::cout << "Nieprawidlowe dane. Podaj unikalna liczbe z zakresu od 1 do 49." << endl;
            wyczyscBufor();
            --i;
        }
        else {
            liczby.push_back(num);
        }
    }
    sort(liczby.begin(), liczby.end());
}

int policzTrafioneLiczby(const vector<int>& liczbyUzytkownika, const vector<int>& liczbyLotto) {
    int count = 0;
    for (int num : liczbyUzytkownika) {
        if (find(liczbyLotto.begin(), liczbyLotto.end(), num) != liczbyLotto.end()) {
            ++count;
        }
    }
    return count;
}

int main() {
    string nazwaGracza;
    int liczbaLosowan;

    std::cout << "Podaj swoje imie: ";
    getline(cin, nazwaGracza);

    std::cout << "Ile losowan chcesz zagrac? ";
    cin >> liczbaLosowan;

    vector<int> liczbyUzytkownika;
    pobierzLiczbyUzytkownika(liczbyUzytkownika);

    ofstream plikGracza(nazwaGracza + ".txt");
    if (plikGracza.is_open()) {
        for (int i = 0; i < liczbaLosowan; ++i) {
            vector<int> liczbyLotto;
            wygenerujLosoweLiczby(liczbyLotto);
            zapiszLiczbyDoPliku(nazwaGracza + ".txt", liczbyLotto);

            int trafioneLiczby = policzTrafioneLiczby(liczbyUzytkownika, liczbyLotto);
            std::cout << "Losowanie " << (i + 1) << ": Trafiles " << trafioneLiczby << " liczb." << endl;
        }
        plikGracza.close();
    }
    else {
        cerr << "Blad: Nie mozna utworzyc lub otworzyc pliku gracza." << endl;
    }

    return 0;
}