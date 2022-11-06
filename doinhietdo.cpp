#include <iostream>

using namespace std;

int main() {
	cout<<"1: F qua C"<<endl;
    cout<<"2: C qua F"<<endl;
    
    int a;
	do{
		cout<<"nhap lua chon: ";
	    cin >> a;
	    if(a != 1 && a != 2){
    		cout << "khong co lua chon nay. Moi chon lai:" << endl;
	    }
	} while (a != 1 && a != 2);
	
	float b,c=0;
	cout<<"nhap nhiet do: ";
 	cin>>b;
	if (a==1){
		c = (b - 32) / 1.8;
	}
	else if (a == 2){
		c = b * 1.8 + 32;
	}
	cout<<"nhiet do sau khi doi la: "<<(float)c<<endl;

}