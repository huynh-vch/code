#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoToanChan(int);
int DemSoToanChan(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nSo cac gia tri hoan hao: ";
	int countToanChan = DemSoToanChan(b, k, l);
	cout << countToanChan;
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

bool SoToanChan(int n)
{
	int temp = abs(n);
	int dv;
	while (temp >= 0)
	{
		dv = temp % 10;
		if (dv % 2 != 0)
		{
			return false;
		}
		temp = temp / 10;
		if (temp == 0)
		{
			return true;
		}
	}
}

int DemSoToanChan(int a[][100], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoToanChan(a[i][j]))
			{
				count++;
			}
		}
	}
	return count;
}