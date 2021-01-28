//bai035.cpp
#include <iostream>
using namespace std;
float Tich(float);

int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	float Kq = Tich(n);
	cout << "Tich T(" << n << ") la: " << Kq << endl;
	system("pause");
	return 1;
}
float Tich(float k)
{
	float T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
	}
	return T;
}