1. Nie. W języku C++ przeciążony operator przypisania (operator=) musi być zdefiniowany jako niestatyczna funkcja składowa klasy. Nie można zdefiniować go jako funkcji globalnej.

2. Tak, technicznie może zwracać void, ale nie jest to zalecane. Standardowo zwraca referencję do obiektu (ClassName&), aby umożliwić łańcuchowe przypisania.

3. Jest to niewystarczające, gdy klasa zarządza dynamicznymi zasobami pamięci lub obiektami systemowymi. Jeśli w klasie znajdują się wskaźniki do zaalokowanej dynamicznie pamięci, domyślny operator wykona tzw. płytką kopię (skopiuje sam adres). W efekcie oba obiekty będą wskazywać na ten sam fragment pamięci. Doprowadzi to do podwójnego zwalniania tej samej pamięci podczas niszczenia obiektów lub niespójności danych, jeśli jeden z nich zmodyfikuje zawartość. W takich przypadkach trzeba napisać własny operator, by zrealizować "głęboką kopię".

4. 

X z = p;    konstruktor kopiujący
X h = X();  konstruktor (możliwie optymalizacja kopiowania)
m = p;      operator=

5. Możliwość łańcuchowania przypisań: a = b = c = d.
Dzięki zwracaniu *this jako X&, wynik jednego przypisania może być bezpośrednio użyty jako argument następnego.

6. Aby uniknąć błędów przy samoprzypisaniu. Jeśli operator najpierw zwolni pamięć obiektu, a potem spróbuje kopiować dane z tego samego obiektu, może dojść do utraty danych lub błędu programu.

7. Automatyczny operator przypisania może zostać usunięty lub być niedostępny, gdy klasa zawiera np.: pola const, referencje jako pola składowe,
składniki, których operator przypisania jest usunięty lub prywatny, klasy bazowe bez dostępnego operatora przypisania.

