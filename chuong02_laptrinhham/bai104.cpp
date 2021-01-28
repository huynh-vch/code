//bai104.cpp
#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	float kq = Tinh(1);
	cout << "Gia tri cua bieu thuc la: " << kq << endl;
	return 1;
}
float Tinh(int k)
{
	float S = 0;
	float T = 1;
	int i = 1;
	while (1 / T > pow(10, -6))
	{
		T = i * (i + 1);
		S = S + 1 / T;
		i = i + 1;
	}
	return S;
}