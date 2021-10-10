#include <iostream>
#include <cstdlib>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base  *gen( void )
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			std::cout << "A generated" << std::endl;
			return (new A);
		case 1:
			std::cout << "B generated" << std::endl;
			return (new B);
		case 2:
			std::cout << "C generated" << std::endl;
			return (new C);
		default:
			return (0);
	}

}

void	identify(Base *base)
{
	if (dynamic_cast<A*>(base))
		std::cout << "A identified" << std::endl;
	else if (dynamic_cast<B*>(base))
		std::cout << "B identified" << std::endl;
	else if (dynamic_cast<C*>(base))
		std::cout << "C identified" << std::endl;
}

int main()
{
	Base *base;

	base = gen();
	identify(base);
	return (0);
}
