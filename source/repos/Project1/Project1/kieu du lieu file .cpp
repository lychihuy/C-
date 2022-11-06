#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream filein;
	filein.open("C:\\Users\\Admin\\Desktop\\kieu du lieu file.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cout << "cannot open the file!!!";
		system("pause ");
		return 0;
	}
	int x, y;
	filein >> x;
	filein >> y;
	ofstream fileout;
	fileout.open("C:\\Users\\Admin\\Desktop\\kieu du lieu file.txt", ios_base::out);
	fileout << "tong la: " << x + y;
	system("pause");
	return 0;
}