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
	int i = 1;
	float S = 0;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1.0 / i;
		S = S + e;
		i = i + 1;
	}
	return S;
}
