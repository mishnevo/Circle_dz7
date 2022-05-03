#include "Circle.h"
void Circle::Print() {
	cout << "Цвет: " << GetColor() << "\n" << "Радиус: " << GetRadius() << endl;
}
double Circle::GetRadius()
{
	return radius;
}

void Circle::SetRadius(double valueRadius)
{
	radius = valueRadius;
}

string Circle::GetColor()
{
	return color;
}

void Circle::SetColor(string valueColor)
{
	color = valueColor;
}

double Circle::Square(double rad)
{
	double area;
	area = 3.14 * rad * rad;
	return area;
}
double Circle::Perimeter(double rad)
{
	double perimeter;
	perimeter = 2 * 3.14 * rad;
	return perimeter;
}