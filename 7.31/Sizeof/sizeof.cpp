#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string bufString, word;


	unsigned int  iNum=0xffffffffffffffff;
	unsigned short int sNum = 0xffffffffffffffff;
	unsigned long long int lNum = 0xffffffffffffffff;
	 float fNum = 0xffffffffffffffff;
	 double dNum = 0xffffffffffffffff;
	 long double ldNum = 0xffffffffffffffff;

	cout << sizeof(iNum) << "\t" << sizeof(sNum) << "\t" << sizeof(lNum) << "\t" << sizeof(fNum) << "\t" << sizeof(dNum) << "\t" << sizeof(ldNum)<< endl;
	cout << (iNum) << "\t" << (sNum) << "\t" << (lNum) << "\t" << (fNum) << "\t" << (dNum) << "\t" <<ldNum<< endl;

	int arr[10];
	int *p = arr;
	p++;
	p++;
	cout << sizeof(arr) << "\t"<< &arr << endl;
	cout <<sizeof( p) << "\t" << *p << endl;
	cout << sizeof(arr) / sizeof(*arr) << endl;
	cout <<p <<"   "<<*p << endl;


	system("pause");
	return 0;
}