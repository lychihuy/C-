#include <iostream>
#include <string>
using namespace std;
int demchuoi (string s)
{
	getline (cin,s);
	int dem=0;
	for (int i=0;i<=s.size();i++)
	{
		if (s[i]!=' ')
		{
			dem++;
		}
	}
//	cout<<dem<<" ";
return dem;
}
int main ()
{
	string s;
	int kq =demchuoi(s);
	cout<<kq;
	return 0;	
}
