//Bai148KyThuatThem
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void ThemDongTaiDongD(float[][100], int &, int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);

	int x;
	cout << "\nNhap dong muon them: ";
	cin >> x;

	ThemDongTaiDongD(b, k, l, x);
	cout << "\nMa tran sau khi them: \n";
	Xuat(b, k, l);
	return 0;
}

void Nhap(float a[][100], int &m, int &n)
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
			a[i][j] = -100 + rand() / ((RAND_MAX) / 200.0);
		}
	}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

void ThemDongTaiDongD(float a[][100], int &m, int n, int x)
{
	m++;
	for (int i = m - 1; i > x; i--)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = a[i - 1][j];
		}
	}

	cout << "\nNhap gia tri dong moi: \n";
	for (int j = 0; j < n; j++)
	{
		printf("a[%d][%d] = ", x, j);
		cin >> a[x][j];
	}
}