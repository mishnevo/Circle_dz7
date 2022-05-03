#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	double GetRadius();
	void SetRadius(double);
	string GetColor();
	void SetColor(string);
	double Square(double);
	double Perimeter(double);
	void Print();
	Circle(double radius) {
		this->radius = radius;
	}
	Circle(double radius, string color) {
		this->radius = radius;
		this->color = color;
	}
	Circle(Circle& other) {

		this->radius = other.radius;
		this->color = other.color;
	}
	~Circle() {
		cout << "\nDestruction";
	}
private:
	double radius;
	string color;
};

