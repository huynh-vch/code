//bai164.cpp
#include <iostream>
using namespace std;

float GTBT(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = GTBT(n);
	cout << "Gia tri cua bieu thuc la: " << kq << endl;
	return 1;
}
float GTBT(int k)
{
	float S = 0;
	int i = 0;
	while (i <= k)
	{
		S = (float)1 / (1 + S);
		i = i + 1;
	}
	return S;
}