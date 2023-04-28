#pragma once

#include <cmath>
#include "Point.h"

struct Rectangle
{
private:

	Point a;
	Point b;

public:

	Rectangle() {}
	Rectangle(const Point& a, const Point& b) : a(a), b(b) {}
	Rectangle(const Rectangle& re) : a(re.a), b(re.b) {}

	~Rectangle() {}

	int getAreaRS() const { return std::abs((b.x - a.x) * (b.y - a.y)); }
};
