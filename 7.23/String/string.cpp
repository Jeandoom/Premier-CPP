#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int StringCompare();
int StringLink();
int DelPunctuation();
int CharCompare(string str1, string str2);
int SizeCompare(string str1, string str2);
int Print(string str);


int main()
{

	//StringCompare();
	//StringLink();
	DelPunctuation();
	system("pause");
	return 0;
}

int StringCompare()
{
	Print("Please enter two strings:");
	string str1(""), str2("");
	getline(cin, str1);				//as a line input
	getline(cin, str2);

	CharCompare(str1, str2);
	SizeCompare(str1, str2);
	return 0;
}

int Print(string str)
{
	cout << str << endl;
	return 0;
}

int CharCompare(string str1, string str2)
{
	if (str1 == str2)
	{
		cout << "\"" << str1 << "\"" << " is equal to " << "\"" << str2 << "\"." << endl;
	}
	else if (str1> str2)
	{
		cout << "\"" << str1 << "\"" << " is bigger than " << "\"" << str2 << "\"." << endl;
	}
	else
	{
		cout << "\"" << str2 << "\"" << " is bigger than " << "\"" << str1 << "\"." << endl;
	}
	return 0;
}

int SizeCompare(string str1, string str2)
{
	if (str1.size() == str2.size())
	{
		cout << "The size of \"" << str1 << "\"" << " is equal to the size of " << "\"" << str2 << "\"." << endl;
	}
	else if (str1.size()> str2.size())
	{
		cout << "\"" << str1 << "\"" << " is longer than " << "\"" << str2 << "\"." << endl;
	}
	else
	{
		cout << "\"" << str2 << "\"" << " is longer than " << "\"" << str1 << "\"." << endl;
	}
	return 0;
}

int StringLink()
{
	Print("Please enter some strings:");
	string str(""), temp("");
	while (getline(cin,temp))
	{
		str += temp + " ";

	}
	Print(str);
	return 0;
}

int DelPunctuation()
{
	Print("Please enter a string:");
	string str("");
	getline(cin, str);

	string::size_type cnt(str.size());

	string::size_type k(0);
	string::size_type ix;
	for (ix = 0; ix != cnt ; ix++)
	{
		if (!ispunct(str[ix]))					// && !isspace(str[ix])
		{
			cout<<str[ix];
		}
		

	}
	cout << endl;
	return 0;
}