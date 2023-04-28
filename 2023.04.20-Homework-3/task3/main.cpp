#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

int main(int argc, char* argv[])
{

	Rectangle rar(Point(0, 0), Point(6, -5));

	std::cout << rar.getAreaRS() << std::endl;

	Circle cir(5);

	std::cout << cir.getAreaC() << std::endl;

	Square sq(Point(5, 3), 6);

	std::cout << sq.getAreaRS() << std::endl;

	Triangle tri(Point(3, 5), Point(0, 0), Point(-3, 2));

	std::cout << tri.getAreaT() << std::endl;

	return EXIT_SUCCESS;
}

