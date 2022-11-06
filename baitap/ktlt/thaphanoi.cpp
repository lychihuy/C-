#include<iostream>
#include<fstream>
using namespace std;
void input (ifstream filein)
{
	filein.open("D:\\dev-c\\thaphanoi.txt",ios_base::in);
	if (filein.fail())
	{	cout<<"khong the mo tep in!!!";
		system("pause")
		return 0;
	}
	int x;
	filein>>x;	
}
void output (ofstream fileout)
{
	fileout.open("D:\\dev-c\\thaphanoiout.txt",ios_base::out);
	if (fileout.fail())
	{	cout<<"khong the mo tep out!!!";
		system("pause")
		return 0;
	}
}
int thaphanoi
