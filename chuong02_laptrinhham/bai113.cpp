//bai113.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrithuhang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = Giatrithuhang(n);
	cout << "Gia tri cua so hang thu " << n << " cua day " << kq << endl;
	return 1;
}
float Giatrithuhang(int k)
{
	float at = 2;
	int i = 2;
	while (i <= k)
	{
		float ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	return at;
}