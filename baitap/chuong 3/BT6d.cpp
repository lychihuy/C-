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
int main() {
 int i, n;
    cout << "Nhap n = ";
    cin >> n;
    cout<<n<<" so nguyen to dau tien la: ";
	int dem=0;
	i=2;
	while (dem<n){
		if (soNguyenTo(i)) {
            dem++;
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}

