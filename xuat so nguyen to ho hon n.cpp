#include <iostream>
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
int main() {
 int i, n;
    cout << "Nhap n = ";
    cin >> n;
    cout<<"Tat ca cac so nguyen to nho hon "<<n<<" la: ";
    for (i = 2; i < n; i++) {
        if (soNguyenTo(i) == 1) {
            cout<<i<<" ";
        }
    }
    return 0;
}

