#include <iostream>
#include <string>

using namespace std;

void ReplaceSpace(string &str)
{
	int len = str.length();
	string result = "";
	for (int i = 0; i < len; ++i)
	{
		if (str[i] == ' ')
			result += "%20";
		else
			result += str[i];
	}
	str = result;
}

int main(void)
{
	string str;
	getline(cin, str);
	ReplaceSpace(str);
	cout << str << endl;
	return 0;
}
