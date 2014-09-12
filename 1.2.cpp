#include <iostream>
#include <cstring>

using namespace std;

void swap(char &a, char &b)
{
	char c = a;
	a = b;
	b = c;
}

void Reverse(char* str)
{
	int len = strlen(str);
	
	for (int i = 0, j = len - 1; i <= j; ++i, --j)
	{
		swap(str[i], str[j]);
	}
}

int main(void)
{
	char str[] = "Where is Bill ?";
	Reverse(str);
	cout << str << endl;
}
