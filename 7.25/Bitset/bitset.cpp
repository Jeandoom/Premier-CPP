#include <iostream>
#include <bitset>

using namespace std;


int main()
{
	bitset<32> bit(0xffffffff);

	unsigned long ulong = bit.to_ulong();

	cout << bit<< endl;

	system("pause");
	return 0;
}