#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int pushString();
int sumLong();
int toUpper();
int changeTen();

int main()
{
	changeTen();

	system("pause");
	return 0;
}

int pushString()
{
	string word;
	vector<string> text;
	while (cin >> word)
	{
		text.push_back(word);
	}
	for (vector<string>::size_type ix=0;ix != text.size(); ix++)
	{
		cout << text[ix]<<"\t" ;
	}
	cout << endl;
	return 0;
}

int sumLong()
{
	vector<long> number;
	long temp(0);

	cin >> temp;
	cout <<temp << endl;
	number.push_back(temp);

	while (cin>>temp)
	{
		
		cout << number[number.size() - 1] + temp << endl;
		number.push_back(temp);
		

	}if (number.size() % 2)
		cout << "Sorry, the last number has no partner to sum and it is " << temp << endl;

	return 0;
}

int toUpper()
{
	vector<string> str;
	string temp;
	int k = 0;				//the various of k is use for counting the size of str. 
	while (cin >> temp)
	{
		
		for (string::size_type ix = 0; ix != temp.size(); ix++)
			temp[ix] = toupper(temp[ix]);
		str.push_back(temp);

	}

	for (vector<string>::const_iterator iter = str.begin(); iter != str.end(); iter++)
	{

		cout << *iter<< "\t" ;

		if (!(str.size() % 8))
			cout << endl;
	}cout << endl;

	return 0;
}

int changeTen()
{
	vector<int> number;
	for (int i = 0; i != 10; i++)
		number.push_back(i + 1);

	for (vector<int>::iterator iter = number.begin(); iter != number.end(); iter++)
	{
		*iter *= 2;
		cout << *iter << "\t";
	}cout << endl;
	return 0;
}