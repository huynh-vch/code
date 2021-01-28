//bai136.cpp
#include <iostream>
using namespace std;

void Nhap(int &, int &);
void Xuat(int, int);

int main()
{
	int x, y;
	Nhap(x, y);
	Xuat(x, y);
	cout << endl;
	return 1;
}
void Nhap(int &x, int &y)
{
	cout << " Nhap giai doan 2 nam x va y " << endl;
	cout << " nam dau x = ";
	cin >> x;
	cout << " nam cuoi y = ";
	cin >> y;
}
void Xuat(int a, int b)
{
	int i = a;
	cout << "Cac nam nhuan trong giai doan tu nam " << a << " den nam " << b << " la: ";
	while (i <= b)
	{
		if (((i % 4 == 0) & (i % 100 != 0)) || (i % 400 == 0))
		{
			cout << i << " ";
		}
		i = i + 1;
	}
}