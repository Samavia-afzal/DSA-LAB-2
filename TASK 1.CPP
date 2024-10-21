#include <iostream>
using namespace std;
 double PI = 3.14159;

class Shape {
public:
	virtual double area() const = 0;
	virtual ~Shape() {} 
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r) : radius(r) {}

	double area()  	const	override{
		return  PI * radius * radius;
	}
};

class Rectangle : public Shape {
private:
	double length;
	double width;
public:
	Rectangle(double l, double w) : length(l), width(w) {}

	double area() const override {
		return length * width; 
	}
};

int main() {
	Shape* circle = new Circle(5); 
	Shape* rectangle = new Rectangle(6, 8); 

	cout << "Area of Circle: " << circle->area() << endl;
	cout << "Area of Rectangle: " << rectangle->area() <<endl; 

	delete circle; 
	delete rectangle; 

	return 0;
}
