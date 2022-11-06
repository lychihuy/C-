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
	
	switch (can){
	case 1: cout<<"giap";break;
	case 2: cout<<"at";break;
	case 3: cout<<"binh";break;
	case 4: cout<<"dinh";break;
	case 5: cout<<"mau";break;
	case 6: cout<<"ky";break;
	case 7: cout<<"canh";	break;
	case 8: cout<<"tan";break;
	case 9: cout<<"nham";break;
	case 0: cout<<"quy";break;}
	
	switch (chi){
	case 1: cout<<" ti nien";break;
	case 2: cout<<" suu nien";break;
	case 3: cout<<" dan nien";break;
	case 4: cout<<" mao nien";break;
	case 5: cout<<" thin nien";break;
	case 6: cout<<" ty nien";break;
	case 7: cout<<" ngo nien";	break;
	case 8: cout<<" mui nien";break;
	case 9: cout<<" than nien";break;
	case 10: cout<<" dau nien";break;
	case 11: cout<<" tuat nien";break;
	case 0: cout<<" hoi nien";break;
	}
	return 0;
}
