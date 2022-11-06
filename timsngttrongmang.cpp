#include <iostream>
using namespace std;
bool songuyento(int soA)
{
	int dem=0;
	for(int i=1;i<=soA;i++)
		if (soA%i==0)
			dem++;
	if (dem>2) return false;
	return true;				
}
void nhapmang(int a[],int n)
{
	for (int i=0;i<n;i++){
		cout<<"nhap phan tu thu "<<i<<":";
		cin>>a[i]	;}
}
int sntlonnhat(int a[],int n)
{
	int max=0;
	for (int i=0;i<n;i++)
		if (a[i]>max && songuyento(a[i]))	
			max=a[i];
	if (max==0)
	return 0;
	else return max;
}
int sapxep(int a[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{	
		if (a[i]>a[j])
		{
			int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		}	
	}					
	cout<<"thu tu so nguyen to tang dan la: ";
	for (int i=0;i<n;i++)
		if(songuyento(a[i]))
			cout<<a[i]<<" ";						
}
int main ()
{
	int a[1000],n;
	cout<<"nhap so phan tu cua mang ";cin>>n;
	nhapmang (a,n);
	cout<<endl;
	sapxep (a,n);
	cout<<endl;
	if (sntlonnhat(a,n)==0)
		cout<<"khong co so nguyen to lon nhat "<<endl;
	else
	cout<<"so nguyen to lon nhat la: "<<sntlonnhat(a,n)<<endl;
	return 0;	
}
