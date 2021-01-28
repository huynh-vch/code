//bai072.cpp
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
	float M = 0;
	for (int i = 1; i <= k; i++)
	{
		M = M + i;
		S = S + 1 / M;
	}
	return S;
}