//bai144.cpp
#include <iostream>
using namespace std;

void SoNguyenTo(int);

int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	SoNguyenTo(n);
	return 1;
}
void SoNguyenTo(int k)
{
	int dem = 0;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
		{
			dem++;
		}
		i++;
	}
	if (dem == 2)
	{
		cout << "Nguyen to";
	}
	else
	{
		cout << "Khong phai nguyen to";
	}
}