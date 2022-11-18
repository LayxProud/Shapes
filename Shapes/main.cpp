#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

class Shape {
public:
	virtual void draw() = 0;
	virtual int square() = 0;

	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
	void setRadius(int r) {
		radius = r;
	}
protected:
	int width;
	int height;
	int radius;
};

class Rectangle : public Shape {
public:
	int square() {
		return (width * height);
	}
	void draw() {
		std::cout << "Drawing a rectangle" << std::endl;
	}
};

class Triangle : public Shape {
public:
	int square() {
		return (width * height) / 2;
	}
	void draw() {
		std::cout << "Drawing a triangle" << std::endl;
	}
};

class Circle : public Shape {
public:
	int square() {
		return pow((radius * M_PI), 2);
	}
	void draw() {
		std::cout << "Drawing a circle" << std::endl;
	}
};

int main() {
	Rectangle Rect;
	Triangle Tri;
	Circle Cir;

	Rect.setWidth(5);
	Rect.setHeight(3);

	Tri.setWidth(4);
	Tri.setHeight(5);

	Cir.setRadius(7);

	Rect.draw();
	Tri.draw();
	Cir.draw();

	std::cout << "The area of rectangle is: " << Rect.square() << std::endl;
	std::cout << "The area of triangle is: " << Tri.square() << std::endl;
	std::cout << "The area of circle is: " << Cir.square() << std::endl;

}