#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
float GiaTriLonNhatTrenDong(float[][100], int, int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	int x;
	cout << "Nhap dong muon tim: ";
	cin >> x;
	cout << "\nGia tri lon nhat tren dong muon tim cua ma tran la: " << GiaTriLonNhatTrenDong(b, k, l, x);
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

float GiaTriLonNhatTrenDong(float a[][100], int m, int n, int x)
{
	float max = a[x][0];
	for (int j = 0; j < n; j++)
	{
		if (max < a[x][j])
			max = a[x][j];
	}
	return max;
}