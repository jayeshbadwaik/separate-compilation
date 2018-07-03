#include "a.hpp"
#include <iostream>

int main()
{
	A<2> a1(3);
	std::cout<<a1.func()<<std::endl;
	A<3> a2(3);
	std::cout<<a2.func()<<std::endl;
	return EXIT_SUCCESS;
}
