#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout<<" 1: im lang"<<endl;
    cout<<" 2: khai nhan"<<endl;
    cout<<" lua chon cua pham nhan a: ";
    cin>>a;
    cout<<" lua chon cua pham nhan b: ";
    cin>>b;
    while ((a!=1 || b!=1)&& (a!=1 || b!=2)&&(a!=2 || b!=1)&&(a!=2 || b!=2)) {
        cout<<"nhap lai"<<endl;
        cout<<" lua chon cua pham nhan a: ";
	    cin>>a;
	    cout<<" lua chon cua pham nhan b: ";
	    cin>>b;
    }
    if (a==1 && b==1) {
        cout<<" moi pham nhan o tu 2 nam"<<endl;
    } else {
        if(a==2 && b==2) {
            cout<<"moi pham nhan o tu 3 nam"<<endl;
        } else {
            if (a==1 && b==2) {
                cout<<"pham nhan a o tu 4 nam"<<endl;
                cout<<"pham nhan b duoc tha bong"<<endl;
            } else {
                if (a==2 && b==1){
                    cout<<"pham nhan a duoc tha bong"<<endl;
                    cout<<"pham nhan b o tu 4 nam"<<endl;
                }
            }
        }
    }
    return 0;
}