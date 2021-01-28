//bai112.cpp Gia tri Pi cua BaileyBrowein Plouffe
#include <iostream>
using namespace std;

float GiatriPi(int);

int main()
{
	float kq = GiatriPi(1);
	cout << "gia tri Pi cua Plouffe  la: " << kq << endl;
	return 1;
}
float GiatriPi(int k)
{
	float Pi = 0;
	float T = 1;
	int i = 0;
	float M = 1;
	while (T >= pow(10, -6))
	{
		M = (float)4.0 / (8 * i + 1) - (float)2.0 / (8 * i + 4) - (float)1.0 / (8 * i + 5) - (float)1.0 / (8 * i + 6);
		T = (float)1 / pow(16, i) * M;
		Pi = Pi + T;
		i = i + 1;
	}
	return Pi;
}