🚲 Wypożyczalnia Rowerów

<p align="center">
<strong>Konsolowa aplikacja do zarządzania wypożyczalnią rowerów napisana w języku C++.</strong>
</p>

<p align="center">
<img src="https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=cplusplus" alt="C++17">
<img src="https://img.shields.io/badge/Platform-Windows%20%7C%20Linux-lightgrey?style=for-the-badge" alt="Platform">
<img src="https://img.shields.io/badge/Project-Educational-success?style=for-the-badge" alt="Educational project">
</p>

📖 Opis projektu

Wypożyczalnia Rowerów to aplikacja konsolowa napisana w języku C++, która umożliwia zarządzanie rowerami w wypożyczalni.

Program pozwala na dodawanie rowerów, ich wypożyczanie, zwracanie oraz wyświetlanie aktualnej listy rowerów wraz z ich statusem i ceną.

Projekt wykorzystuje podstawowe mechanizmy języka C++, takie jak struktury, wektory, pętle, instrukcje warunkowe oraz obsługę wyjątków.

📑 Spis treści
Funkcjonalności
Wykorzystane technologie
Struktura projektu
Instalacja i uruchomienie
Menu programu
Obliczanie kosztów
Obsługa błędów
Ograniczenia
Możliwości rozwoju
✨ Funkcjonalności
Funkcja	Opis
➕ Dodawanie roweru	Dodawanie roweru z unikalnym ID, opisem, rodzajem i ceną
🚴 Wypożyczanie roweru	Wypożyczanie dostępnego roweru na podstawie ID
↩️ Zwracanie roweru	Zwracanie roweru i obliczanie kosztu wypożyczenia
📋 Wyświetlanie rowerów	Wyświetlanie wszystkich rowerów wraz z ich statusem
⚠️ Walidacja danych	Sprawdzanie poprawności wprowadzanych danych
🛡️ Obsługa wyjątków	Obsługa błędów za pomocą mechanizmu try-catch
🛠️ Wykorzystane technologie
C++17 – język programowania.
iostream – obsługa wejścia i wyjścia.
vector – przechowywanie listy rowerów.
string – przechowywanie tekstu.
iomanip – formatowanie wyświetlanych danych.
limits – obsługa bufora wejściowego.
stdexcept – obsługa wyjątków standardowych.
📂 Struktura projektu
text
Wypozyczalnia-Rowerow/
│
├── main.cpp       # Główny kod programu
│
└── README.md      # Dokumentacja projektu

🚀 Instalacja i uruchomienie
1. Sklonowanie repozytorium
bash
git clone https://github.com/TWOJ-LOGIN/Wypozyczalnia-Rowerow.git

2. Przejście do katalogu projektu
bash
cd Wypozyczalnia-Rowerow

3. Kompilacja programu

Do kompilacji wymagany jest kompilator obsługujący standard C++17.

bash
g++ -std=c++17 main.cpp -o wypozyczalnia

4. Uruchomienie programu

Windows:

bash
wypozyczalnia.exe


Linux:

bash
./wypozyczalnia

💻 Menu programu

Po uruchomieniu aplikacji użytkownik zobaczy następujące menu:

text
================================
      WYPOZYCZALNIA ROWEROW
================================

1. Dodaj rower
2. Wypozycz rower
3. Zwroc rower
4. Wyswietl rowery
0. Wyjscie

Wybierz opcje:

💰 Obliczanie kosztów

Koszt wypożyczenia roweru obliczany jest na podstawie liczby godzin oraz ceny za godzinę.

Wzór:

Koszt = Liczba godzin × Cena za godzinę

Przykład:

Parametr	Wartość
Cena za godzinę	15 zł
Czas wypożyczenia	4 godziny
Całkowity koszt	60 zł
⚠️ Obsługa błędów

Program wykrywa następujące sytuacje:

Próba dodania roweru z istniejącym ID.
Próba wypożyczenia już wypożyczonego roweru.
Próba zwrotu roweru, który nie jest wypożyczony.
Podanie nieistniejącego ID.
Podanie nieprawidłowej ceny.
Podanie nieprawidłowej liczby godzin.
Wybranie nieprawidłowej opcji menu.

Do obsługi błędów wykorzystano mechanizm wyjątków C++:

cpp
try {
    // Kod programu
}
catch (const exception& e) {
    cout << "BLAD: " << e.what() << endl;
}

⚠️ Ograniczenia
Dane przechowywane są wyłącznie w pamięci programu.
Po zamknięciu aplikacji wszystkie dane zostają utracone.
Program działa wyłącznie w konsoli.
Aplikacja nie posiada historii wypożyczeń.
Program nie obsługuje wielu użytkowników jednocześnie.
🔮 Możliwości rozwoju

W przyszłości projekt można rozbudować o:

💾 Zapisywanie danych rowerów do pliku.
👤 System rejestracji klientów.
📜 Historię wypożyczeń.
🧾 Generowanie rachunków.
✏️ Edytowanie danych rowerów.
🗑️ Usuwanie rowerów.
📊 Statystyki wypożyczalni.
🖥️ Graficzny interfejs użytkownika.

<p align="center">
<strong>🚲 Wypożyczalnia Rowerów</strong>
<br>
Projekt edukacyjny wykonany w języku C++.
</p>
