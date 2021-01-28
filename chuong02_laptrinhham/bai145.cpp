//bai145.cpp
#include <iostream>
using namespace std;

void SoChinhPhuong(int);

int main()
{
	int n;
	cout << "nhap n = ";
	cin >> n;
	SoChinhPhuong(n);
	return 1;
}
void SoChinhPhuong(int k)
{
	int flag = 0;
	int i = 0;
	while (i <= k)
	{
		if ((i * i) == k)
		{
			flag = 1;
		}
		i = i++;
	}
	if (flag == 1)
	{
		cout << "So chinh phuong.";
	}
	else
	{
		cout << "Khong phai so chinh phuong.";
	}
}