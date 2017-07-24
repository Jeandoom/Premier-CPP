#include <iostream>

int whileOneToTen()
	{

		int sum = 0;
		int val = 1;
		int i = 0;
		//Keep executing the while until val greater than 10
		while (std::cin >> i)
		{
			sum += val;
			val++;

		}
		std::cout << "The number of 1 to 10 inclusive is " << sum << std::endl;
		system("pause");
		return 0;
		 
	}

int forOneToTen()
{

	int sum = 0;
	
	//Keep executing the while until val greater than 10
	for(int val = 1000; val <= 2000; val++)
	{
		std::cout <<  val<<"\t";
		sum += val;

	}
	std::cout << std::endl;
//	std::cout << "The number of 1 to 10 inclusive is " << sum << std::endl;
	system("pause");
	return 0;

}

int main()
	{

		std::cout << "Enter two numbers:" << std::endl;
		int v1, v2;

		std::cin >> v1 >> v2;
		std::cout << "The number of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
		std::cout << "The number of ";
		std::cout << v1;
		std::cout << " times ";
		std::cout << v2;
		std::cout << " is ";
		std::cout << v1 * v2 << std::endl;
		system("pause");
		
		whileOneToTen();
		forOneToTen();
		return 0;

	}



