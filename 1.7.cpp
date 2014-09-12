#include <iostream>
#include <cstring>

using namespace std;

void CrossZero(int** a, int m, int n)
{
	bool* rows = new bool[m];
	bool* cols = new bool[n];
	
	memset(rows, false, sizeof(rows));
	memset(cols, false, sizeof(cols));
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] == 0)
			{
				rows[i] = true;
				cols[j] = true;
			}
		}
	}	
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (rows[i] || cols[j])
				a[i][j] = 0;
		}
	}
	delete []rows;
	delete []cols;
}

int main(void)
{
	int m, n;
	cin >> m >> n;
	
	int** a = new int* [m];
	for (int i = 0; i < m; ++i)
		a[i] = new int[n];
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	}
	
	CrossZero(a, m, n);
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < m; ++i)
		delete []a[i];
	delete []a;
}
