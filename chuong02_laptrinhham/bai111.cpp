//bai111.cpp Gia tri Pi cua Nilakantha
#include <iostream>
using namespace std;

float GiatriPi(int);

int main()
{
	float kq = GiatriPi(1);
	cout << "gia tri Pi cua Nilakantha la: " << kq << endl;
	return 1;
}
float GiatriPi(int k)
{
	float Pi = 3;
	float T = 1;
	int i = 2;
	int dau = 1;
	while (T >= pow(10, -6))
	{
		T = (float)4 / (i * (i + 1) * (i + 2));
		Pi = Pi + ((float)dau * T);
		dau = dau * (-1);
		i = i + 2;
	}
	return Pi;
}