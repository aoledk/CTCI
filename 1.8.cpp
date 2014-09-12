#include <iostream>
#include <string>

using namespace std;

bool IsSubString(const string base, const string target)
{
	if (base.find(target) != string::npos)
		return true;
	return false;
}

bool IsRotate(string base, string target)
{
	base += base;
	if (IsSubString(base, target))
		return true;
	else
		return false;
}

int main(void)
{
	string base, target;
	getline(cin, base);
	getline(cin, target);
	
	bool is_rotated = IsRotate(base, target);
	
	cout << (is_rotated ? "IS Rotated" : "Not Rotated") << endl;
	return 0;
}
