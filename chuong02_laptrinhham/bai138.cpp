//bai138.cpp
#include <iostream>
using namespace std;

float Giatrihamso(float);

int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float kq = Giatrihamso(x);
	cout << " Gia tri cua ham so tai " << x << " la: " << kq << endl;
	return 1;
}
float Giatrihamso(float k)
{
	float fx;
	if (k > 0)
	{
		if (k <= 1)
		{
			fx = (float)(5 * k - 7);
		}
		else
		{
			fx = (float)(2 * k * k * k + 5 * k * k - 8 * k + 3);
		}
	}
	else
	{
		fx = (float)((-2) * k * k * k + 6 * k + 9);
	}
	return fx;
}
