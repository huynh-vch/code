//bai103.cpp
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
	float M = 1 / T;
	while (M > pow(10, -6))
	{
		S = S + M;
		T = T + 2;
		M = (float)1 / T;
	}
	return S;
}