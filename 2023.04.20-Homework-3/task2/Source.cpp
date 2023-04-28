#include<iostream>

struct Student
{
private:
	std::string surname;
	std::string name;
	int gpa;

public:
	Student();
	Student(std::string surname = "", std::string name = "", int gpa = 0) : name(name), surname(surname), gpa(gpa) {}
	Student(const Student& st) : surname(st.surname), name(st.name), gpa(st.gpa) {}

	~Student() {}

	std::string getName() { return name; }
	std::string getSurname() { return surname; }
	int getGPA() { return gpa; }
};

int main(int argc, char* argv[])
{
	int n;
	std::string nam;
	std::string sur;
	int mark;
	int su;

	std::cin >> n;

	Student** list = new Student * [n] {};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> sur >> nam;
		su = 0;

		for (int j = 0; j < 3; ++j)
		{
			std::cin >> mark;
			su += mark;
		}

		list[i] = new Student(sur, nam, su);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if ((*list[j]).getGPA() < (*list[j + 1]).getGPA())
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << (*list[i]).getSurname() << " " << (*list[i]).getName() << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete list[i];
	}
	delete[] list;

	return EXIT_SUCCESS;
}