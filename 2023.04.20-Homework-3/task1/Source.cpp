#include<iostream>

struct Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point(const Point& pt) : x(pt.x), y(pt.y) {}

	~Point() {}

	int getX() { return x; }
	int getY() { return y; }
	int getLength() { return x * x + y * y; }
};

int main(int argc, char* argv[])
{
	int n;
	int x;
	int y;

	std::cin >> n;

	Point** dots = new Point * [n] {};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> x >> y;

		dots[i] = new Point(x, y);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if ((*dots[j]).getLength() > (*dots[j + 1]).getLength())
			{
				std::swap(dots[j], dots[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << (*dots[i]).getX() << " " << (*dots[i]).getY() << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete dots[i];
	}
	delete[] dots;

	return EXIT_SUCCESS;
}