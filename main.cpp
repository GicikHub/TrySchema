
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

struct Rower {
    int id;
    string opis_roweru;
    string rodzaj;
    double cena;
    bool wypozyczony;
};

int main() {
    vector<Rower> rowery;
    int wybor;

    do {
        cout << "\n===== WYPOZYCZALNIA ROWEROW =====\n";
        cout << "1. Dodaj rower\n";
        cout << "2. Wypozycz rower\n";
        cout << "3. Zwroc rower\n";
        cout << "4. Wyswietl rowery\n";
        cout << "0. Wyjscie\n";
        cout << "Wybierz opcje: ";

        try {
            if (!(cin >> wybor)) {
                throw runtime_error("Nieprawidlowe dane!");
            }

            switch (wybor) {

                // DODAWANIE ROWERU
                case 1: {
                    Rower r;

                    cout << "Podaj ID: ";
                    cin >> r.id;

                    for (const auto& rower : rowery) {
                        if (rower.id == r.id) {
                            throw runtime_error("Rower o takim ID juz istnieje!");
                        }
                    }

                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Podaj opis roweru: ";
                    getline(cin, r.opis_roweru);

                    cout << "Podaj rodzaj roweru: ";
                    getline(cin, r.rodzaj);

                    cout << "Podaj cene za godzine: ";
                    if (!(cin >> r.cena) || r.cena < 0) {
                        throw runtime_error("Nieprawidlowa cena!");
                    }

                    r.wypozyczony = false;

                    rowery.push_back(r);

                    cout << "Rower zostal dodany!\n";
                    break;
                }

                // WYPOZYCZANIE ROWERU
                case 2: {
                    int id;
                    cout << "Podaj ID roweru: ";
                    cin >> id;

                    bool znaleziono = false;

                    for (auto& r : rowery) {
                        if (r.id == id) {
                            znaleziono = true;

                            if (r.wypozyczony) {
                                throw runtime_error("Rower jest juz wypozyczony!");
                            }

                            r.wypozyczony = true;
                            cout << "Rower zostal wypozyczony!\n";
                            break;
                        }
                    }

                    if (!znaleziono) {
                        throw runtime_error("Nie znaleziono roweru!");
                    }

                    break;
                }

                // ZWRACANIE ROWERU
                case 3: {
                    int id;
                    double godziny;

                    cout << "Podaj ID roweru: ";
                    cin >> id;

                    bool znaleziono = false;

                    for (auto& r : rowery) {
                        if (r.id == id) {
                            znaleziono = true;

                            if (!r.wypozyczony) {
                                throw runtime_error("Ten rower nie jest wypozyczony!");
                            }

                            cout << "Podaj liczbe godzin: ";
                            if (!(cin >> godziny) || godziny <= 0) {
                                throw runtime_error("Nieprawidlowa liczba godzin!");
                            }

                            double koszt = godziny * r.cena;

                            r.wypozyczony = false;

                            cout << fixed << setprecision(2);
                            cout << "Rower zostal zwrocony!\n";
                            cout << "Do zaplaty: " << koszt << " zl\n";

                            break;
                        }
                    }

                    if (!znaleziono) {
                        throw runtime_error("Nie znaleziono roweru!");
                    }

                    break;
                }

                // WYSWIETLANIE ROWEROW
                case 4: {
                    if (rowery.empty()) {
                        cout << "Brak rowerow w wypozyczalni.\n";
                    }
                    else {
                        cout << "\n";
                        cout << left
                             << setw(8) << "ID"
                             << setw(22) << "Opis"
                             << setw(18) << "Rodzaj"
                             << setw(12) << "Cena"
                             << setw(15) << "Status" << endl;

                        cout << string(75, '-') << endl;

                        for (const auto& r : rowery) {
                            cout << left
                                 << setw(8) << r.id
                                 << setw(22) << r.opis_roweru
                                 << setw(18) << r.rodzaj
                                 << setw(12) << r.cena
                                 << setw(15)
                                 << (r.wypozyczony ? "Wypozyczony" : "Dostepny")
                                 << endl;
                        }
                    }

                    break;
                }

                // WYJSCIE
                case 0:
                    cout << "Koniec programu.\n";
                    break;

                default:
                    throw runtime_error("Nie ma takiej opcji w menu!");
            }
        }
        catch (const exception& e) {
            cout << "BLAD: " << e.what() << endl;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

    } while (wybor != 0);

    return 0;
}
