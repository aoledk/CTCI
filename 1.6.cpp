#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

void Transform(int a[][4], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (i > j)
				swap(a[i][j], a[j][i]);
		}
	}
	for (int i = 0, j = n - 1 - i; i < j; ++i, --j)
	{
		for (int ite = 0; ite < 4; ++ite)
			swap(a[i][ite], a[j][ite]);
	}
}

int main(void)
{
	int a[4][4] = {{1, 2, 3, 4}, 
				   {5, 6, 7, 8}, 
				   {9, 10, 11, 12}, 
				   {13, 14, 15, 16}};
	Transform(a, 4);
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
