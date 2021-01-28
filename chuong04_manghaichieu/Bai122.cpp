//Bai122KyThuatSapXep
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
void HoanViCot(float[][100], int, int, int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tran ban dau la: \n";
	Xuat(b, k, l);

	int y1, y2;
	cout << "\nNhap cot muon hoan vi y1: ";
	cin >> y1;
	cout << "\nNhap cot muon hoan vi y2: ";
	cin >> y2;

	HoanViCot(b, k, l, y1, y2);
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

void HoanViCot(float a[][100], int m, int n, int y1, int y2)
{
	for (int i = 0; i < m; i++)
	{
		float temp = a[i][y1];
		a[i][y1] = a[i][y2];
		a[i][y2] = temp;
	}
}