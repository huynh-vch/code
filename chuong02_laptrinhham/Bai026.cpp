//bai026.cpp
#include <iostream>
using namespace std;
void Hoanvi(int, int);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	Hoanvi(a, b);
	cout << "Hoan vi a va b:" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	system("pause");
	return 1;
}
void Hoanvi(int m, int n)
{
	m = m + n;
	n = m - n;
	m = m - n;
}