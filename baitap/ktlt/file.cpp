#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ifstream filein;
	filein.open("D:\\dev-c\\mang.txt",ios_base::in);
	if(filein.fail()==true)
	{
		cout<<"khong the mo tep mang";
		system("pause");
		return 0;
	}
	int x;
	filein>>x;
	int *a;
	a= new int [x];
	for (int i=0;i<x;i++)
	{
		filein>>a[i];
	} 
	ofstream fileout;
	fileout.open("D:\\dev-c\\mangout.txt",ios_base::out);
	if(fileout.fail()==true)
	{
		cout<<"khong the mo tep";
		system("pause");
		return 0;
	}
	int temp;
	for (int i=0;i<x;i++)
	for (int j=i+1;j<x-1;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
			
	}
	for(int i=0;i<x;i++)
		fileout<<a[i] << endl;
	system ("pause");
	return 0;	
}
