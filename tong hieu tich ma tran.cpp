#include <iostream>
using namespace std;
void NhapMaTran(int a[][50], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
      	cout<<"a["<<i<<"]["<<j<<"] = ";
        cin>>a[i][j];
      }
}
 
void XuatMaTran(int a[][50], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         cout<<a[i][j]<<"\t";
      cout<<endl;
   }
}
void tinhtong(int a[][50], int b[][50], int m, int n)
{
	for(int i = 0; i < m; i++){
	    for(int j = 0; j < n; j++){
	    	cout<<a[i][j] + b[i][j]<<"\t";
	    	
	    }
	    cout<<endl;
	}
}
void tinhhieu(int a[][50], int b[][50], int m, int n)
{
	for(int i = 0; i < m; i++){
	    for(int j = 0; j < n; j++){
	    	cout<<a[i][j] - b[i][j]<<"\t";
	    	
	    }
	    cout<<endl;
	}
}
void tinhtich(int a[][50], int b[][50], int m, int n)
{
	int matrantich[50][50];
	for(int i=0;i<m;i++)    
		for(int j=0;j<n;j++) {  
			matrantich[i][j]=0;  
			for(int k=0;k<n;k++)    
				matrantich[i][j]+=a[i][k]*b[k][j]; }
	for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    cout<<matrantich[i][j]<<"\t";
	    	
	    }
	    cout<<endl;
	}
		
}
int main(){
    int a[50][50], b[50][50];
    int m=3,n=3;
	cout<<"nhap vao ma tran thu nhat: "<<endl;
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    cout<<"nhap vao ma tran thu hai: "<<endl;
    NhapMaTran(b, m , n);
    XuatMaTran(b, m, n);
    cout<<endl;
    cout<<"tong 2 ma tran:"<<endl;
    tinhtong(a,b, m, n);
    cout<<endl;
    cout<<"hieu 2 ma tran:"<<endl;
    tinhhieu(a,b, m, n);
    cout<<endl;
    cout<<"tich 2 ma tran :"<<endl;
    tinhtich(a,b, m, n);
}
