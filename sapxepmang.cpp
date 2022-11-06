#include <iostream>
using namespace std;
int main ()
{
	int n,a[100];
	cout<<"nhap n ";
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"nhap phan tu thu "<<i+1<<" ";
		cin>>a[i];
	}
	
	int temp;
	for (int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	cout<<"thu tu tang dan la \n";
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	return 0;
}
