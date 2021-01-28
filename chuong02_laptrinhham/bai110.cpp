//bai110.cpp Gia tri Pi cua Gregory Leibniz
#include <iostream>
using namespace std;

float GiatriPi(int);

int main()
{
	float kq = GiatriPi(1);
	cout << "gia tri Pi cua leibniz la: " << kq << endl;
	return 1;
}
float GiatriPi(int k)
{
	float Pi = 0;
	float T = 1;
	int i = 1;
	int dau = 1;
	while (T >= pow(10, -6))
	{
		T = (float)4 / i;
		Pi = Pi + ((float)dau * T);
		dau = dau * (-1);
		i = i + 2;
	}
	return Pi;
}