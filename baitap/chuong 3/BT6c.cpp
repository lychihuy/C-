#include <iostream>
#include <math.h>
using namespace std;
bool soNguyenTo(int soA)
{
	int dem = 0;
	for(int i = 1; i <= soA; i++)
	{
		if(soA % i == 0) dem++;
	}
	if(dem>2) return false;
	return true;
}
int main ()
{
    int n,i, k ;
    int a = 0, b = 0, Snt=0;
    cout<<"Nhap n ";
    cin>>n;
    i = k = n;
    i++;
    if(soNguyenTo(i) == 1) a = i;
    k--;
    if(soNguyenTo(k) == 1) b = k;
    if(abs(a - n) <= abs(b - n)) 
		Snt=a;
    else 
		Snt=b;
    cout<<"So nguyen to gan "<<n<<" nhat la: "<<Snt<<endl;
    return 0;
}
