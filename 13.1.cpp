#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	int k;
	char line[256];
	scanf("%d", &k);
	ifstream ifs_0;
	ifstream ifs_1;
	ifs_0.open("13.1.in", ifstream::in);
	ifs_1.open("13.1.in", ifstream::in);
	
	int line_no = 0;
	
	while(ifs_0.good() && line_no < k)
	{
		ifs_0.getline(line, 256);
		++line_no;
	}
	
	while (ifs_0.good() && ifs_1.good())
	{
		ifs_0.getline(line, 256);
		ifs_1.getline(line, 256);	
	}
	
	while (ifs_1.good())
	{
		ifs_1.getline(line, 256);
		printf("%s\n", line);
	}
	return 0;
}
