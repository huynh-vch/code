//Bai121kyThuatSapXep
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void HoanViDong(float[][100], int, int, int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tran ban dau la: \n";
	Xuat(b, k, l);

	int x1, x2;
	cout << "\nNhap dong muon hoan vi x1: ";
	cin >> x1;
	cout << "\nNhap dong muon hoan vi x2: ";
	cin >> x2;

	HoanViDong(b, k, l, x1, x2);
	cout << "\nMa tran sao khi hoan vi: \n";
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

void HoanViDong(float a[][100], int m, int n, int x1, int x2)
{
	for (int j = 0; j < n; j++)
	{
		float temp = a[x1][j];
		a[x1][j] = a[x2][j];
		a[x2][j] = temp;
	}
}