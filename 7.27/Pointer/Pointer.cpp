#include <iostream>

using namespace std;

int main()
{
	char chr[20] = { 'a','b','c','d' };
	char *cp = chr;
	int i = 0;
//	cout << chr << endl;
	while (*cp)
	{
		cout << *cp << endl;
		if (!(*(cp + 1)))
			while (i<=40)
			{
				cp++;
				cout << *cp << endl;
				i++;
			}
				
		cp++;
		i++;
	}
	cout << i << endl;
	system("pause");
	return 0;
}