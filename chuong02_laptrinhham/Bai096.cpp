//bai096.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float Tong(float);

int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);

	cout << "Tong S(" << n << ") la: " << setprecision(20) << kq << endl;
	system("pause");
	return 1;
}
float Tong(float k)
{
	float S = 0;
	float T = 1;
	for (float i = 1; i <= k; i++)
	{
		T = T * i;
		S = pow((T + S), 0.5);
	}
	return S;
}
