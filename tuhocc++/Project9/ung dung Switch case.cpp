#include <iostream>
using namespace std;
//cau truc re nhanh
int main()
{
	//viet chuong trinh nhap 2 so tu ban phim, nhan 1 de tinh tong 2 so, phim 2 tinh hieu
	int a, b;
	int select;
	cout << "Nhap B=" << endl;
	cin >> a;
	cout << "Nhap B=" << endl;
	cin >> b;

	cout << "Nhap vao lua chon" << endl;
	cout << "1: Tinh tong: " << endl;
	cout << "2: Tinh hieu: " << endl;
	cin >> select;
	switch (select)
	{
	case 1:
	{
		cout << "Tong A + B =" << a + b << endl;
		break;
	}
	case 2:
		cout << "Hieu A - B =" << a - b << endl;
		break;
	}
	return 0;

}