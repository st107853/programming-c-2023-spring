#pragma once

struct Point
{
	int x;
	int y;

	Point operator +(const Point& ps) const
	{
		return Point(x + ps.x, y + ps.y);
	}

	Point operator -(const Point& ps) const
	{
		return Point(x - ps.x, y - ps.y);
	}

	Point() {}
	Point(int x, int y) :x(x), y(y) {}
	Point(const Point& p) : x(p.x), y(p.y) {}

	~Point() {}
};
