#include "Circle.h"

int main()
{
    setlocale(LC_ALL, "ru");

    double radius;
    string color;
    cout << "¬ведите цвет круга: ";
    cin >> color;
    cout << "¬ведите радиус: ";
    cin >> radius;
    Circle my_circle;
    my_circle.SetRadius(radius);
    my_circle.SetColor(color);
    my_circle.Print();
    cout << "ƒлина окружности: " << my_circle.Perimeter(my_circle.GetRadius());
}