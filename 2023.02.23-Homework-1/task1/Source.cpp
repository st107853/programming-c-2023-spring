#include<iostream>

struct Animal {
	std::string type;
	std::string name;
	int age;

	Animal();

	Animal(
		std::string type,
		std::string name,
		int age)
		: type(type), name(name), age(age)
	{

	}

	Animal(const Animal& st) : type(st.type), name(st.name), age(st.age)
	{

	}

	~Animal() {}
};

void printAnimal(Animal st)
{
	std::cout << "the representative of the " << st.type << " named " << st.name << " is " << st.age << " ears old";
}

void elderAnimal(Animal * st)
{
	st->age = st->age + 1;
}

int main(int argc, char* argv[])
{
	Animal Capybara("Capybara", "Kvoka", 8);

	printAnimal(Capybara);

	elderAnimal(&Capybara);

	std::cout << std::endl;

	printAnimal(Capybara);

	return EXIT_SUCCESS;
}