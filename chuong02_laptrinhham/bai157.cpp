//bai157.cpp
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
	float s = 0;
	int i = 1;
	while (i <= k)
	{
		s = s + (float)1 / i;
		cout << "a" << i << " = " << s << endl;
		i = i + 1;
	}
}