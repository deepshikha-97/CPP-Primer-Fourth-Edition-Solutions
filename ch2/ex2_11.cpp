#include <iostream>

int main()
{
	int base, exponent;
	int result = 1;

	std::cout << "Enter base and exponent: ";
	std::cin >> base >> exponent;
	
	for(int i = 0; i < exponent; i++)
		result *= base;
	
	std::cout << base
		<< " raised to the power of "
		<< exponent <<": \t"
		<< result << std::endl;	

	return 0;
}
