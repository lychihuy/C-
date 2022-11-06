#include <iostream>
using namespace std;
bool checkday(int d,int m,int y)
{
	if (d<1||d>31)
		return false;
	if (m <1||m >13)
		return false;
	if (y<0)
		return false;
	return true;
}

bool checkd (int d,int m, int y)
{
	switch (m)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12: 
			if(d>31) return false;
			break;
		case 4: 
		case 6: 
		case 9: 
		case 11: 
			if(d>30) return false;
			break;
		case 2:
			if(y%4==0)
				if(d>29) return false;
			else
				if(d>28) return false;
			break;
	}	
	return true;
}

int songay (int m, int y)
{
	int songay;
		switch (m)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12: songay=31; break;
		case 4: 
		case 6: 
		case 9: 
		case 11: songay=30; break;
		case 2:
			if(y%4==0)
				songay=29;
			else
				songay=28;
			break;
	}
	return songay;
}		
void ngayhomtruoc(int d,int m, int y)
{
	d--;
	if(d==0){
		if (m==1||m==2||m==4||m==6||m==8||m==9||m==11)	
			d=31;
		if (m==5||m==7||m==10||m==12)	
			d=30;
		if(m==3)
			if(y%4==0)
				d=29;
			else d=28;

		m--;
		if(m==0)
		{
			m=12;
			y--;
		}
	}
	cout<<"ngay hom truoc la ngay "<<d<<" thang "<<m<<" nam "<<y<<endl;
}
void ngayhomsau(int d,int m, int y)
{
	int so=songay(m,y);
	d++;
	if (d>so){
		d=1;
		m++;
		if (m>12)
			m=1;
		y++;
	}
	cout<<"ngay hom sau la ngay "<<d<<" thang "<<m<<" nam "<<y<<endl;
}
int main ()
{
	int d,m,y;
	bool check;
	cout<<"nhap ngay thang nam ";
	cin>>d>>m>>y;
	if (checkday (d,m,y)==1)
		check=checkd(d,m,y);
	if (check)
	{
		ngayhomtruoc(d,m,y);
		ngayhomsau(d,m,y);	
	}
	return 0;
}
