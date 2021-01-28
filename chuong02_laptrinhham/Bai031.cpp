//bai031.cpp
#include <iostream>
using namespace std;
float Tong(float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float Kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << Kq << endl;
	system("pause");
	return 1;
}
float Tong(float k)
{
	float S = 0;
	for (int i = 1; i <= 2 * k + 1; i = i + 2)
	{
		S = S + 1.0 / i;
	}
	return S;
}