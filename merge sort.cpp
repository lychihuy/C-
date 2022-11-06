#include<iostream> 
using namespace std; 
void nhapmang (int a[], int n)
{
	for (int i=0;i<n;i++){	
		cout<<"nhap phan tu thu a["<<i<<"]: ";
		cin>>a[i];}
}
void merge(int a[], int p, int q, int r) 
{ 
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1+1], R[n2+1]; 
    for(int i = 0; i < n1; i++) 
        L[i] = a[p + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = a[q + j + 1]; 
    int i = 0;  
    int j = 0; 
    L[n1] = 1000;
    R[n2] = 1000;
    for (int k  = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }
}


void mergeSort(int a[], int p, int r) 
{ 
    if (p < r) 
    { 
        int q = (p+r)/2;
        mergeSort(a, p, q); 
        mergeSort(a, q + 1, r); 
        merge(a, p, q, r); 
    } 
} 
  
void xuatmang (int a[],int n)
{
	for(int i=0;i<n;i++){
		cout <<a[i] <<" ";
	}
	cout<<endl;		
}
int main() 
{ 
    int a[1000], n, p, r;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	nhapmang(a,n);
 	mergeSort(a, 0, n-1);
    cout << "ket qua sau khi sap xep: "; 
    xuatmang(a,n);
    return 0; 
} 