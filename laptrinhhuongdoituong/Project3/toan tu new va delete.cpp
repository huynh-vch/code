#include <iostream>
#include <time.h>
using namespace std;
// Cấp phát động và làm việc với mảng bằng con trỏ
int main()
{
	int n;
	cout << "Nhap n: " << endl;
	cin >> n;

	int* p;
	p = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu: " << i << endl;
		cin >> *(p + i);
	}

	//sắp xếp tăng dần
	//for (int i = 0; i < n - 1; i++)
	//{
	//	for (int j = i + 1; j < n; j++)
	//	{
	//		if (*(p + i) > * (p + j))
	//			swap(*(p + i), *(p + j));
	//	}
	//}

	//rand tự động
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		*(p + i) = rand() % 99 + 1;
	}
	cout << "Mang random la" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << "\t";
	}
	cout << "\n";
	for (int i = 0; i < n - 1; i++)
	{
		cout << *(p + i) << "\t";
	}
	return 0;
}
