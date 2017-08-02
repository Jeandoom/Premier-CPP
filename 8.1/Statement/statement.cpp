#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int repeatWord();
int vecTest();

int main()
{
	repeatWord();


	system("pause");
	return 0;
}

int repeatWord()
{
	vector<string> word;
	vector<unsigned int> cnt;
	string strB("");
	string strA("");
	unsigned int k = 0;			//counting the times of two vector which was pushed.

	//set default value
	word.push_back(" ");
	cnt.push_back(1);
	vector<string>::iterator strIter = word.begin();
	vector<unsigned int>::iterator iIter = cnt.begin();
	bool bRepeat = false;

	while (cin >> strA)
	{
		if (!strA.compare(strB))
		{

			if (!bRepeat)
			{
				bRepeat = true;
			}
			++*iIter;
		}
		else
		{
			if (bRepeat)
			{
				bRepeat = false;

				word.push_back(strA);
				cnt.push_back(1);
				strIter = word.begin();			//If you pushed it,you should require the value of begin() again.
				iIter = cnt.begin();			//If you won't then you'll get the serious runtime error.

				strIter+=++k;
				iIter+=k;
			}
			else
			{
				*strIter = strA;
			}
		}
		strB = strA;
	}

	if (cnt.begin() != cnt.end())
	{
		int flag = 0;

		//get the index of the biggest value in the cnt vector 
		for (vector<unsigned int>::size_type ix = 1; ix != cnt.size(); ++ix)
		{
			if (cnt[ix] > cnt[flag])
			{
				flag = ix;
			}
		}

		//showing the value of the cnt vector.
		for (vector<unsigned int>::size_type ix = 0; ix != cnt.size(); ++ix)
		{
			cout << word[ix];
		} cout << endl;
		//showing the value of the word vector.
		for (vector<unsigned int>::size_type ix = 0; ix != cnt.size(); ++ix)
		{
			cout << cnt[ix];
		} cout << endl;

		cout << "The " << word[flag] << " shows up " << cnt[flag] << " times in a row." << endl;
	}
	else
	{
		cout << "There is no repeated word." << endl;
	}

	return 0;
}

//The function for testing the function of the vector 
int vecTest() 
{
	vector<string> word;
	vector< int> cnt;
	string strB("");
	string strA("");
	unsigned int k = 0;

	word.push_back(" ");
	cnt.push_back(1);
	vector<string>::iterator strIter = word.begin();
	vector< int>::iterator iIter = cnt.begin();
	printf("%.8x \t %.8x\n", strIter, iIter);
	printf("%.8x \t %.8x\n", word.begin(), cnt.begin());
	cout << *strIter << "\t" << *iIter << endl;

	while (cin >> strA)
	{
		k++;
		word.push_back(strA);
		cnt.push_back(1);
		word.push_back(strA);
		cnt.push_back(1);
		//strIter = word.begin();
		//iIter = cnt.begin();
		//printf("%.8x \t %.8x\n", strIter, iIter);
		//printf("%.8x \t %.8x\n", word.begin(), cnt.begin());
		cout << *strIter << "\t" << *iIter << endl;
		strIter+=k;
		iIter+=k;
		printf("%.8x \t %.8x\n", strIter, iIter);
		printf("%.8x \t %.8x\n", word.begin(), cnt.begin());
		cout << *strIter << "\t" << *iIter << endl;


	}

	for (vector<unsigned int>::size_type ix = 1; ix != cnt.size(); ++ix)
	{
		if (cnt[ix] > cnt[ix])
		{
			ix = ix;
		}

	}
	for (vector<unsigned int>::size_type ix = 1; ix != cnt.size(); ++ix)
	{
		cout << word[ix];
	} cout << endl;



	return 0;
}