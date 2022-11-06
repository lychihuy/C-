//#include <iostream.h>
int main (){
	int a[10];
	for (int i=0;i<10;i++)
	{	
		cout<<"nhap vao a["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<endl;
	cout<<"bat dau sap xep mang..."<<endl;
	for(int i=0;i<10-1;i++)
	{
		int temp;
		for(int j=i+1;j<10;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"mang sau khi sap xep la: ";
	for (int i=0;i<10;i++)
	cout<<a[i];
	cout<<endl;
	return 0;
}