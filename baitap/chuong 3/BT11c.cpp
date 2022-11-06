#include <iostream>
using namespace std;
int main ()
{
	int nam,can,chi;
	char giap,at,binh,dinh,mau,ky,anh,tan,nham,quy;
	char ti,suu,dan,mao,thin,ty,ngo,mui,than,dau,tuat,hoi;
	cout<<"nhap nam ";
	cin>>nam;
	can=(nam-3)%10;
	chi=(nam-3)%12;
	if (can==1)
		cout<<"nam am lich la giap";
	if (can==2)
		cout<<"nam am lich la at";
	if (can==3)
		cout<<"nam am lich la binh";
	if (can==4)
		cout<<"nam am lich la dinh";
	if (can==5)
		cout<<"nam am lich la mau";
	if (can==6)
		cout<<"nam am lich la ky";
	if (can==7)
		cout<<"nam am lich la canh";
	if (can==8)
		cout<<"nam am lich la tan";
	if (can==9)
		cout<<"nam am lich la nham";
	if (can==0)
		cout<<"nam am lich la quy";
	if (chi==1)
		cout<<" ti";
	if (chi==2)
		cout<<" suu";
	if (chi==3)
		cout<<" dan";
	if (chi==4)
		cout<<" mao";
	if (chi==5)
		cout<<" thin";
	if (chi==6)
		cout<<" ty";
	if (chi==7)
		cout<<" ngo";
	if (chi==8)
		cout<<" mui";
	if (chi==9)
		cout<<" than";
	if (chi==10)
		cout<<" dau";
	if (chi==11)
		cout<<" tuat";
	if (chi==0)
		cout<<" hoi";
	
	return 0;
}
