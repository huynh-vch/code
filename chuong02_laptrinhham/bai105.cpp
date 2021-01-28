//bai105.cpp
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
	int i = 1;
	float S = 0;
	int M = 0;
	float T = 1;
	while (T >= pow(10, -6))
	{
		M = M + i;
		T = (float)1.0 / M;
		S = S + T;
		i = i + 1;
	}
	return S;
}
