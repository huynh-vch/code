#include <iostream>
using namespace std;
//lam 1 lan roi moi kiem tra dieu kien
//de: nhap so nguyen tu ban phim, neu so do am thi yeu cau nhap lai
int main()
{
	int a;
	do
	{
		cout << "Nhap a: " << endl;
		cin >> a;
	} while (a < 0);
	return 0;
}