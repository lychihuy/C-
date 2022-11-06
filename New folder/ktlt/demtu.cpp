#include <iostream>
#include <string.h>
using namespace std;
int demtu(char s[])
{
	int n = strlen(s),dem=0;
	if (s[0]!=' ')
	{
		dem++;
	}
	for (int i=0;i<n-1;i++)
		if (s[i]==' '&&s[i+1]!=' ')
		{
			dem++;	
		}
	return dem;	
}
int main ()
{
	char *s;
	s=new char [1000];
	cout<<"nhap chuoi";
	gets(s);
	cout<<demtu(s);
	system ("pause");
	return 0;
}

