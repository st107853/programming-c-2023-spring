#pragma once

#include "Point.h"
#include <cmath>

struct Triangle
{
private:

	Point a;
	Point b;
	Point c;

public:

	Triangle() {}
	Triangle(const Point& a, const Point& b, const Point& c): a(a), b(b), c(c) {}
	Triangle(const Triangle& tri) : a(tri.a), b(tri.b), c(tri.c) {}

	~Triangle() {}

	float getAreaT() const { return std::abs((b.x - a.x)*(c.y - a.y) - (c.x - a.x)*(b.y - a.y))/2; }
};
