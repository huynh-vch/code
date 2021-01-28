//Bai117KyThuatCoHieu
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
bool CotTangDan(float[][100], int, int, int);
void XuatCotTangDan(float[][100], int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\n Ma tran ban dau la: \n";
	Xuat(b, k, l);

	cout << "\n Cac cot tang dan la: \n";
	XuatCotTangDan(b, k, l);

	return 0;
}

void Nhap(float a[][100], int &m, int &n)
{
	cout << "Nhap so dong m: ";
	cin >> m;
	cout << "Nhap so cot n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*cout << "a[" << i << "," << j << "] = ";*/
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

bool CotTangDan(float a[][100], int m, int n, int y)
{
	if (m < 1)
	{
		return false;
	}

	for (int i = 0; i < m - 1; i++)
	{
		if (a[i][y] > a[i + 1][y])
		{
			return false;
		}
	}
	return true;
}

void XuatCotTangDan(float a[][100], int m, int n)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (CotTangDan(a, m, n, j))
			{
				cout << setw(10) << fixed << setprecision(2) << a[i][j];
				cout << endl;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "Ma tran khong co cot tang dan." << endl;
	}
}