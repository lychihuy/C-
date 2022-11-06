//bài 24. tong, hieu, modul 2 so phuc
#include <iostream>
#include <math.h>
using namespace std;

struct Complex
{
	int phanthuc;
	int phanao;
};
typedef struct Complex COMPLEX;

void nhapsophuc(COMPLEX	&t){
	cout<<"nhap phan thuc: ";
	cin>>t.phanthuc;
	cout<<"nhap phan ao: ";
	cin>>t.phanao;	
}

void xuatsophuc(COMPLEX	t){
	cout<<"so phuc : "<<t.phanthuc<<" + "<<t.phanao<<"i "<<endl;
}

COMPLEX tongsophuc (COMPLEX &t1, COMPLEX &t2)
{
	COMPLEX temp;
	temp.phanthuc = t1.phanthuc + t2.phanthuc;
	temp.phanao = t1.phanao + t2.phanao;
	cout<<"tong 2 so phuc: "<<temp.phanthuc<<" + "<<temp.phanao<<"i"<<endl;
}
COMPLEX hieusophuc (COMPLEX &t1, COMPLEX &t2)
{
	COMPLEX temp;
	temp.phanthuc = t1.phanthuc - t2.phanthuc;
	temp.phanao = t1.phanao - t2.phanao;
	cout<<"hieu 2 so phuc: "<<temp.phanthuc<<" + "<<temp.phanao<<"i"<<endl;
}
double modul (COMPLEX &t)
{
	double m;
	m = sqrt ((t.phanthuc*t.phanthuc)+(t.phanao*t.phanao));
	return m;
}
int main()
{
	COMPLEX x,y;
	cout<<"nhap so phuc thu nhat: "<<endl;
	nhapsophuc(x);
	xuatsophuc(x);
	cout<<"do lon cua so phuc 1: "<<modul(x)<<endl;
	cout<<endl;
	cout<<"nhap so phuc thu hai: "<<endl;
	nhapsophuc(y);
	xuatsophuc(y);
	cout<<"do lon cua so phuc 2: "<<modul(y)<<endl;
	cout<<endl;
	tongsophuc(x,y);
	hieusophuc(x,y);
	return 0;
}