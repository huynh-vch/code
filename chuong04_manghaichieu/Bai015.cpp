#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
void XuatGiaTriChanTrenMotDong(int[][100], int, int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\n Ma tram ban dau la: \n";
	Xuat(b, k, l);
	int x;
	cout << "\n Nhap dong muon xuat: \n";
	cin >> x;
	cout << "\n Cac gia tri chan tren dong: \n";
	XuatGiaTriChanTrenMotDong(b, k, l, x);
	return 0;
}

void Nhap(int a[][100], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 200 - 100);
		}
	}
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << a[i][j];
		}
		cout << endl;
	}
}

void XuatGiaTriChanTrenMotDong(int a[][100], int m, int n, int x)
{

	for (int j = 0; j < n; j++)
	{
		if (a[x][j] % 2 == 0)
		{
			cout << setw(7) << a[x][j];
		}
	}
}