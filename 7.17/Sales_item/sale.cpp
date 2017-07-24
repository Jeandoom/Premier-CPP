#include <iostream>
#include "Sales_item.h"

int compare();
int main()
{
	Sales_item book;
	Sales_item book1;
	//read ISBN, number of copies sold, and sales price
	//std::cin >> book>>book1;
	//write ISBN, number of copies sold, total revenue, and average price
	//std::cout << book <<book<< std::endl;
	//std::cout << book << std::endl;
	compare();
	system("pause");
	return 0;

}

int compare()
{
	Sales_item total,trans;
//	std::cin >> temp;
//	book = temp;
//	std::cout << book << std::endl;
	if (std::cin >> total)
	{
		while (std::cin >> trans)
		{
			if(total.same_isbn(trans) )
			{
				std::cout << "Same" << std::endl;
				total += trans;
			}
			else
	
			{
				std::cout << "Different" << std::endl;
				std::cout << total << std::endl;
				total = trans;
			}
		}
		
		std::cout << total << std::endl;
	}else {
		std::cout << "No data?" << std::endl;
		return -1;
	}
	
	return 0;
}