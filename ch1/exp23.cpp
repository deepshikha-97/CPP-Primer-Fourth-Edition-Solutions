#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	Sales_item sum;
	//read ISBN, number of copies sold, and sales price
	std::cout<<"Enter information of book\n"<<std::endl;
	while(EOF)
	{	
	std::cin >> book;
	//write ISBN, number of copies sold, total revenue, and average price
	//std::cout << book << std::endl;
	sum = sum + book;
	}
	std::cout << sum << std::endl;
	return 0;	
}
