//bai025.cpp
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
	cout << "Hoan vi a & b:" << a << " ," << b << endl;
	system("pause");
	return 0;
}
void Hoanvi(int m, int n)
{
	int temp = m;
	m = n;
	n = temp;
}