//bai101.cpp
#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	float kq = Tinh(1);
	cout << "ket qua la " << kq << endl;
	return 1;
}
float Tinh(int k)
{
	int i = 2;
	float S = 0;
	float M = (float)1.0 / i;
	while (M >= pow(10, -6))
	{
		M = (float)1.0 / i;
		S = S + M;
		i = i + 2;
	}
	return S;
}
