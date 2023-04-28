#pragma once

struct Circle
{
private:

	int r; // radius

public:

Circle(){}
Circle(const int r) : r(r) {}
Circle(const Circle& ci) : r(ci.r) {}

~Circle() {}

float getAreaC() const { return 3.1415 * r * r; }
};