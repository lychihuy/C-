#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	ifstream filein;
	filein.open("D:\\dev-c\\chuoi.txt",ios_base::in);
	if (filein.fail()==true)
	{
		cout<<"khong the mo tep chuoi";
		system("pause");
		return 0;
	}
	/*string s,s1,s2; 
	getline(filein,s);
	getline(filein,s1);
	getline(filein,s2);
	filein.ignore();*/
	char *s;
	s=new char [1000];
	filein.ignore();
	getline(filein,s);
	char *s1;
	s1=new char [1000];
	filein.ignore();
	getline(filein,s1);
	char *s2
	s2=new char [1000];
	getline(filein,s2);
	filein.close();
	ofstream fileout;
	fileout.open("D:\\dev-c\\chuoiout.txt",ios_base::out);
	if(fileout.fail()==true)
	{
		cout<<"khong the mo tep";
		system("pause");
		return 0;
	}
	/*int found=s.find(s1);
	while(found!=string::npos){
		s.replace(s.begin()+found,s.begin()+found+s1.size(),s2.begin(),s2.end());
		found=s.find(s1);}*/
	char *p
	p= strchr (s,s1);
	fileout.close();
	system ("pause");
	return 0;
}
