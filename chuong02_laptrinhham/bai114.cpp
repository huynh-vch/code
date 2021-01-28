//bai114.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrisohang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = Giatrisohang(n);
	cout << "Gia tri so hang thu " << n << " cua day la: " << kq << endl;
	return 1;
}
float Giatrisohang(int k)
{
	float at = -2;
	float T = 3;
	float M = 7;
	int i = 2;
	for (int i = 2; i <= k; i++)
	{
		T = T * 3;
		M = M * 7;
		float ahh = 5 * at + 2 * T - 6 * M + 12;
		at = ahh;
	}
	return at;
}