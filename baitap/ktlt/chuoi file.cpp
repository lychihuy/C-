#include<iostream>
#include<fstream>
using namespace std;
void docfile(ifstream& filein, int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		filein>>a[i];
	}
	
}
int main ()
{
	ifstream filein;
	filein.open("C:\\Users\\Admin\\Desktop\\NUM.INP.txt",ios_base::in);
	if (filein.fail())
	{
		cout<<"khong the mo tep";
			system ("pause");
			return 0;
	}
	int *a,n;
	a=new int [1000];
	filein>>n;
	docfile(filein,a,n);
	ofstream fileout;
	fileout.open("C:\\Users\\Admin\\Desktop\\NUM.OUT.txt",ios_base::out);
	int dem=1, *b; int k = 0;
	b=new int [1000];
	for(int i=0;i<n;i++)
		{
			if(a[i+1]>a[i])
				dem++;
			else 
			{	
				b[k]=dem;
				k++;
				dem=1;			
			}
		}
	int max = 0;
	for (int i=0;i<k+1;i++)
	{
		if(b[i] >= max)
			max = b[i];
	}
	fileout<<"day con lien tiep tang dan co nhieu phan tu nhat la: "<<max;
	filein.close();
	fileout.close();
	system("pause");
	return 0;	
}
