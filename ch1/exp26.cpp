#include <iostream>
#include "Sales_item.h"

int main()
{
	//declare variables to hold running sum and data for the next record
	Sales_item total, trans;
	//is there data to process?
	if(std::cin >> total){
		//if so read the transaction records
		while(std::cin >> trans)
		{
			if(total.isbn()==trans.isbn())
			{
				total += trans;
			}
			else {
				//no match: print & assign to total
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}else {
		//no input! warn the  user
		std::cout << "No data?" << std::endl;
		return -1; //indicate failure
	}
	return 0;
}
