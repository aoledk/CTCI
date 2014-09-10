#include <iostream>
#include <string>

using namespace std;

bool IsUnique1(string str)
{
	bool flags[256] = {false};
	int len = str.length();
	
	for (int i = 0; i < len; ++i)
	{
		if (flags[str[i]])
			return false;
		flags[str[i]] = true;
	}
	return true;
}

bool IsUnique2(string str)
{
	int flags[8] = {0};
	int len = str.length();
	
	for (int i = 0; i < len; ++i)
	{
		int value = int(str[i]);
		int base = value / 32;
		int shift = value % 32;
		
		if (flags[base] & (1 << shift))
			return false;
		flags[base] |= (1 << shift);
	}
	return true;
}

int main(void)
{
	string str;
	cin >> str;
	
	bool is_unique = false;
	is_unique = IsUnique2(str);
	cout << (is_unique ? "Unique" : "Not Unique") << endl;
	return 0; 
}
