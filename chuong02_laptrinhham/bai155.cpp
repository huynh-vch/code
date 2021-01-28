//bai155.cpp
#include <iostream>
using namespace std;

void Xuat(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	Xuat(n);
	return 1;
}
void Xuat(int k)
{
	float T = 1;
	int i = 0;
	cout << "Chuoi gia tri cua a la: " << endl;
	while (i <= k)
	{
		T = pow(2, i + 1);
		cout << "a" << i << " = " << T << endl;
		i = i + 1;
	}
}