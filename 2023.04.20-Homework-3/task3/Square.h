#pragma once

#include "Rectangle.h"

struct Square : public Rectangle
{
	Square() {}
	Square(const Point& a, int side) : Rectangle(a, a + Point(side, side)) {}
	Square(const Square& sq) : Rectangle(sq) {}

	~Square() {}
};