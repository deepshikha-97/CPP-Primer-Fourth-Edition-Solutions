#include <iostream>
#include <string>

int main()
{
	double salary =  9999.99,
		wage(salary + 0.01);
	int interval,
		month = 8, day = 7, year = 1995;
	std::string title("C++ Primer, 4th Ed."),
		publisher = "A-W";
	
	std::cout << "Salary = " << salary << "\n" << "Wage = " << wage << std::endl;
	
	std::cout << "Interval = " << interval << "\n" << "Month = "<< month << "\tDay =  " << day << "\tyear" << year << std::endl;

	std::cout << "Title : " << title << "Publisher: " << publisher << std::endl;
	return 0;
}
