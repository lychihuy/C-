#include <iostream>
using namespace std;
int main ()
{
	int h,s,m,t,ngay=0;
	cout<<"nhap vao giay ";cin>>t;
	h=t/3600;
	t=t%3600;
	m=t/60;
	s=t%60;
	while (h>24){
		ngay++;
		h=h-24;}
	cout<<"thoi gian sau khi doi la: "<<ngay<<" ngay "<<h<<" gio "<<m<<" phut "<<s<<" giay "<<endl;
	return 0;
}
