#include <iostream>
#include <string>

int main()
{
//Local objects of type int
	std::string str;
//	extern char chr;
	int value = 0;
	int pow = 0;
	int result = 1;
//	int cnt = 4;
//	std::cout << chr<< std::endl;
	std::cout << "Please enter two numbers of base and exponent:" << std::endl;
	std::cin >> value >> pow;
//repeat calculation of result until cnt is equal to pow
	for (int cnt = 0; cnt != pow; cnt++)
	{
		result *= value;
//		std::cout << cnt << std::endl;

	}
	std::cout << value
		<< " raised to the power of "
		<< pow << ": "
		<< result << std::endl;

	system("pause");
	return 0;

}