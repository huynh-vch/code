#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoDang3m(int);
int TongDang3m(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	int x;
	cout << "\nTong cac gia tri co dang 3^m : \n";
	int tong3m = TongDang3m(b, k, l);
	cout << tong3m;
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

bool SoDang3m(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (pow(3, i) == n)
		{
			return true;
		}
	}
	return false;
}

int TongDang3m(int a[][100], int m, int n)
{
	int s = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoDang3m(a[i][j]))
			{
				s = s + a[i][j];
			};
		}
	}
	return s;
}