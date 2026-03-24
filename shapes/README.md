Program: Obliczanie odległości między dwoma punktami

Opis programu
Program służy do obliczania odległości między dwoma punktami na płaszczyźnie kartezjańskiej.
Użytkownik wprowadza współrzędne dwóch punktów. Program sprawdza, czy punkty znajdują się w pierwszej ćwiartce układu współrzędnych (x > 0 oraz y > 0).
Następnie program oblicza odległość między punktami i wyświetla wynik.

Wzór użyty do obliczeń
Odległość między punktami jest obliczana według wzoru:

d = sqrt((x2 - x1)^2 + (y2 - y1)^2)

Struktura projektu
Projekt składa się z następujących plików:

main.cpp – główny plik programu, zawiera funkcję main oraz obsługę wprowadzania danych
Point.h – deklaracja klasy Point
Point.cpp – implementacja klasy Point
Line.h – deklaracja klasy Line
Line.cpp – implementacja klasy Line

Opis klas

Klasa Point
Reprezentuje punkt na płaszczyźnie.
Zawiera współrzędne x i y oraz metody do ich odczytu i modyfikacji.

Klasa Line
Reprezentuje odcinek między dwoma punktami.
Zawiera dwie zmienne typu Point oraz metodę obliczającą długość odcinka.

Kompilacja programu

Aby skompilować program przy użyciu kompilatora g++, należy wykonać polecenie:

g++ main.cpp Point.cpp Line.cpp -o program.exe

Uruchomienie programu

Po kompilacji program można uruchomić poleceniem:

.\program.exe

Autor
Maksim Pyshynski

Opis laboratorium
Program został napisany w języku C++ w celu zapoznania się z programowaniem obiektowym, klasami, metodami oraz podziałem programu na pliki nagłówkowe i implementacyjne.


