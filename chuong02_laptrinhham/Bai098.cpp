//bai098.cpp
#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << kq << endl;
	system("pause");
	return 1;
}
float Tong(int k)
{
	float S = 0;
	for (int i = 2; i <= k; i++)
	{
		S = pow((i + S), (1.0 / i));
	}
	return S;
}