#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

int main() {
    double x1, y1, x2, y2;
    
    cout << "=== Programma dlya rascheta rastoyaniya mezhdu dvumya tochkami ===" << endl;
    cout << endl;
    
    // Считываем координаты первой точки
    cout << "Vvedite koordinaty pervoy tochki:" << endl;
    cout << "X1: ";
    cin >> x1;
    cout << "Y1: ";
    cin >> y1;
    
    // Считываем координаты второй точки
    cout << endl;
    cout << "Vvedite koordinaty vtoroy tochki:" << endl;
    cout << "X2: ";
    cin >> x2;
    cout << "Y2: ";
    cin >> y2;
    
    // Создаем точки с введёнными координатами
    Point p1(x1, y1);
    Point p2(x2, y2);
    
    // Выводим координаты точек
    cout << endl;
    cout << "Punkt 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Punkt 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;
    
    // Проверяем, лежат ли точки в первой четверти
    cout << endl;
    cout << "Proverka pervoй chetverti (x > 0 i y > 0):" << endl;
    cout << "Punkt 1 v pervoй chetverti: " << (p1.isInFirstQuarter() ? "DA" : "NET") << endl;
    cout << "Punkt 2 v pervoй chetverti: " << (p2.isInFirstQuarter() ? "DA" : "NET") << endl;
    
    // Создаем линию и вычисляем расстояние
    Line line(p1, p2);
    double length = line.getLength();
    
    cout << endl;
    cout << "Rastoyanie mezhdu tochkami: " << length << endl;
    
    return 0;
}
