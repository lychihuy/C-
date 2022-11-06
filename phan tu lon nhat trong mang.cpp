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
	{
		int max=a[0];
		for (int i=1;i<n;i++){
			if(max<a[i])
			max=a[i];}
		cout<<"phan tu lon nhat la "<<max<<endl;
		
	}
	return 0;
}
