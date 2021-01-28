//bai143.cpp
#include <iostream>
using namespace std;

void SoHoanthien(int);

int main()
{
	int n;
	cout << "nhap n = ";
	cin >> n;
	SoHoanthien(n);
	return 1;
}
void SoHoanthien(int k)
{
	int s = 0;
	int i = 1;
	while (i < k)
	{
		if (k % i == 0)
		{
			s = s + i;
		}
		i++;
	}
	if (k == s)
	{
		cout << "HT";
	}
	else
	{
		cout << "Khong HT";
	}
}