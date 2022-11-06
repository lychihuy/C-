#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int docfile (string &s)
{	ifstream filein;
	filein.open ("D:\\dev-c\\demchuoi.txt",ios_base::in);
	if (filein.fail())
	{
		cout<<"khong the mo tep!!!"<<endl;
		system("pause");
		return 0;
	}
	getline(filein,s);
	filein.close();
}
int ghifile()
{	string s;
	docfile(s);
	int demchu=0,demso,demtrang=0,demdb=0,demkt;
	ofstream fileout;
	fileout.open ("D:\\dev-c\\demchuoiout.txt",ios_base::out);
	if (fileout.fail())
	{
		cout<<"khong the mo tep!!!"<<endl;
		system("pause");
		return 0;
	}
	for (int i=0;i<=s.size();i++)
	{
		if (s[i]==' ')
		demtrang++;
	}
	fileout<<"so khoang trang la: "<<demtrang<<endl;
	demkt=s.size()-demtrang;
	fileout<<"so ky tu la: "<<demkt<<endl;
	for (int j=0;j<s.size();j++)
	{
		if ((s[j]>32&&s[j]<48)||(s[j]>57&&s[j]<65)||(s[j]>90&&s[j]<97)||(s[j]>122&&s[j]<128))
		demdb++;
	}
	fileout<<"so ky tu da biet la: "<<demdb<<endl;
	for (int k=0;k<s.size();k++)
	{
		if (s[k]>='0'&&s[k]<='9')
		demso++;
	}
	fileout<<"so luong ky so la: "<<demso<<endl;
	demchu=s.size()-demtrang-demdb-demso;
	fileout<<"so luong chu la: "<<demchu<<endl;
	system("pause");
	return 0;
}
int main ()
{
	ghifile();
	return 0;}
