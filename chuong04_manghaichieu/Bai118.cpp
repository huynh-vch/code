//Bai118KyThuatXayDungMaTran
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void MaTranAbs(float[][100], int, int, float[][100], int &, int &);

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
	MaTranAbs(b, k, l, c, m, n);
	cout << "\nMa tran tri tuyet doi: \n";
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

void MaTranAbs(float a[][100], int m, int n, float b[][100], int &k, int &l)
{
	k = m;
	l = n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = abs(a[i][j]);
		}
	}
}