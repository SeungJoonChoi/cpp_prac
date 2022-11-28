
#include <cstdint>
#include <iostream>

int main(void)
{
	int				    n1;
	unsigned int	n2;
	uintptr_t		  p;
    // unsigned long p;

	p = reinterpret_cast<uintptr_t>(&n1); // p = &n1 -> error
    // p = &n1;
	std::cout << &n1 << std::endl;
	std::cout << std::hex << p << std::endl;
	p = reinterpret_cast<uintptr_t>(&n2); // p = &n2 -> error
	std::cout << &n2 << std::endl;
	std::cout << std::hex << p << std::endl;
	return (0);
}