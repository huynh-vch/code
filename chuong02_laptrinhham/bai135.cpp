//bai135.cpp
#include <iostream>
using namespace std;

void Namnhuan(int);

int main()
{
	int n;
	cout << " Nhap ten nam n = ";
	cin >> n;
	Namnhuan(n);
	return 1;
}
void Namnhuan(int k)
{
	if (((k % 4 == 0) & (k % 100 != 0)) || (k % 400 == 0))
	{
		cout << k << " la nam nhuan" << endl;
	}
	else
	{
		cout << k << " Khong phai la nam nhuan" << endl;
	}
}