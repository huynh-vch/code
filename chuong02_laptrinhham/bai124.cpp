//bai124.cpp
#include <iostream>
using namespace std;

void Giatrisohang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	Giatrisohang(n);
	return 1;
}
void Giatrisohang(int k)
{
	float at = 2;
	float bt = 1;
	for (int i = 2; i <= k; i = i + 1)
	{
		float ahh = at * at + 2 * bt * bt;
		float bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
	}
	cout << "Gia tri cua so hang thu " << k << " cua day voi a = " << at << " voi b = " << bt << endl;
}