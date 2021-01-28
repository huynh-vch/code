//bai156.cpp
#include <iostream>
using namespace std;

void Xuat(int);

int main()
{
	cout << "Nhap n =";
	int n;
	cin >> n;
	Xuat(n);
	return 1;
}
void Xuat(int k)
{
	int at = 1;
	int a = 1;
	int i = 1;
	while (i <= k)
	{
		a = at * i;
		at = a;
		cout << "a" << i << " = " << at << " = " << i << "!" << endl;
		i = i + 1;
	}
}
