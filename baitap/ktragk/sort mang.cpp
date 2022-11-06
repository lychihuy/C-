#include <iostream>
using namespace std;
void nhapmang (int a[])
{
	for (int i=0;i<100;i++){	
		cout<<"nhap phan tu thu a["<<i<<"]: ";
		cin>>a[i];}
}
void xapseptangdan(int a[])
{	
	for (int i=0;i<100;i++){
		for(int j=i+1;j<100;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"thu tu tang dan la: ";
	for	(int i=0;i<100;i++)
		 cout<<a[i]<<" ";
}
void xapsepgiamdan(int a[])
{	
	for (int i=0;i<100;i++){
		for(int j=i+1;j<100;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<endl;
	cout<<"thu tu giam dan la: ";
	for	(int i=0;i<100;i++)
		 cout<<a[i]<<" ";
}
int main ()
{
	int a[100];
	nhapmang(a);
	xapseptangdan(a);
	xapsepgiamdan(a);
	return 0;
}
