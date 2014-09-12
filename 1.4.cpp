#include <iostream>
#include <string>

using namespace std;

bool IsAnagram(string str_0, string str_1)
{
	if (str_0.length() != str_1.length())
		return false;
	int count_0[256] = {0};
	int count_1[256] = {0};
	
	int len_0 = str_0.length();
	for (int i = 0; i < len_0; ++i)
	{
		++count_0[str_0[i]];
	}
	
	int len_1 = str_1.length();
	for (int i = 0; i < len_1; ++i)
	{
		++count_1[str_1[i]];
	}
	
	for (int i = 0; i < 256; ++i)
	{
		if (count_0[i] != count_1[i])
			return false;
	}
	return true;
}

int main(void)
{
	string str_0, str_1;
	getline(cin, str_0);
	getline(cin, str_1);
	
	bool is_anagram = IsAnagram(str_0, str_1);
	cout << (is_anagram ? "Is Anagram" : "Not Anagram") << endl;
	return 0;
}
