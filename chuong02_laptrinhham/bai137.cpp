//bai137.cpp
#include <iostream>
using namespace std;

float Giatrihamso(float);

int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float kq = Giatrihamso(x);
	cout << "Gia tri cua ham so tai " << x << " la: " << kq << endl;
	return 1;
}
float Giatrihamso(float k)
{
	float fx;
	if (k >= 5)
	{
		fx = 2 * k * k + 5 * k + 9;
	}
	else
	{
		fx = (-2) * k * k + 4 * k - 9;
	}
	return fx;
}