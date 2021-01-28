//bai038.cpp
#include <iostream>
using namespace std;
float Tong(float);

int main()
{
	float n;
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
	for (int i = 0; i <= k; i++)
	{
		S = S + pow(i, 4);
	}
	return S;
}