#include <iostream>
#include <string>

using namespace std;

void DeleteDup1(string &str)
{
	bool flags[256] = {false};
	int len = str.length();
	int ite = 0;
	
	for (int i = 0; i < len; ++i)
	{
		if (!flags[str[i]])
		{
			str[ite++] = str[i];
			flags[str[i]] = true;
		}
	}
	str = str.substr(0, ite);
}

void DeleteDup2(string &str)
{
	int flags[8] = {0};
	int len = str.length();
	int ite = 0;
	
	for (int i = 0; i < len; ++i)
	{
		int value = (int)(str[i]);
		int base = value / 32;
		int shift = value % 32;
		if ((flags[base] & (1 << shift)) == 0)
		{
			str[ite++] = str[i];
			flags[base] |= (1 << shift);
		}
	}
	str = str.substr(0, ite);
}

int main(void)
{
	string str;
	cin >> str;
	DeleteDup1(str);
	cout << str << endl;
}
