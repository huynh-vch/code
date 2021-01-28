//bai121.cpp Tinh gia tri cua so hang fibonacci
#include <iostream>
using namespace std;

float Giatricuasohang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = Giatricuasohang(n);
	cout << "Gia tri cua so thang thu " << n << " cua day fibonacci la: " << kq << endl;
	return 1;
}
float Giatricuasohang(int k)
{
	float ftt = 1;
	float ft = 1;
	int i = 2;
	while (i <= k)
	{
		float fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
		i = i + 1;
	}
	return ft;
}
