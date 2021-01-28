//Bai123KyThuatSapXep
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void HoanViTrenDong(float[][100], int, int, int, int, int);
void XepTangDanTrenDong(float[][100], int, int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tran ban dau la: \n";
	Xuat(b, k, l);

	int x;
	cout << "\nNhap dong muon sap xep tang dan: ";
	cin >> x;

	cout << "\nMa tran sao khi sap xep dong " << x << " tang dan: \n";
	XepTangDanTrenDong(b, k, l, x);
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

void HoanViTrenDong(float a[][100], int m, int n, int x, int vt1, int vt2)
{
	float temp = a[x][vt1];
	a[x][vt1] = a[x][vt2];
	a[x][vt2] = temp;
}

void XepTangDanTrenDong(float a[][100], int m, int n, int x)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[x][i] > a[x][j])
			{
				HoanViTrenDong(a, m, n, x, i, j);
			}
		}
	}
}