//Bai119KyThuatXayDungMaTran
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
float MaxDong(float[][100], int, int, int);
float MaxCot(float[][100], int, int, int);
void MaTran(float[][100], int, int, float[][100], int &, int &);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);

	int m;
	int n;
	float c[100][100];
	MaTran(b, k, l, c, m, n);
	cout << "\nMa tran 119: \n";
	Xuat(c, m, n);
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

float MaxDong(float a[][100], int m, int n, int x)
{
	float max = a[x][0];
	for (int j = 0; j < n; j++)
	{
		if (max < a[x][j])
		{
			max = a[x][j];
		}
	}
	return max;
}

float MaxCot(float a[][100], int m, int n, int y)
{
	float max = a[0][y];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i][y])
		{
			max = a[i][y];
		}
	}
	return max;
}

void MaTran(float a[][100], int m, int n, float b[][100], int &k, int &l)
{
	k = m;
	l = n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			float temp = MaxDong(a, m, n, i);
			if (temp < MaxCot(a, m, n, j))
			{
				temp = MaxCot(a, m, n, j);
			}
			b[i][j] = temp;
		}
	}
}