#include "Circle.h"

int main()
{
    setlocale(LC_ALL, "ru");

    double radius;
    string color;
    cout << "������� ���� �����: ";
    cin >> color;
    cout << "������� ������: ";
    cin >> radius;
    Circle my_circle;
    my_circle.SetRadius(radius);
    my_circle.SetColor(color);
    my_circle.Print();
    cout << "����� ����������: " << my_circle.Perimeter(my_circle.GetRadius());
}