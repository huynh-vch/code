#include <iostream>

using namespace std;

int main()
{
	//ax + b = 0. a = 0 , b # 0 thi phuong trinh vo nghiem
	//neu a = 0, b = 0 thi phuongg trinh vo so nghiem
	//neu a # 0 thi phuong trinh co nghiem -b/a
	//dau vao a,b
	//dau ra x
	int a, b;
	cout << "Nhap a,b" << endl;
	cin >> a >> b;
	if (a == 0 && b != 0)
	{
		cout << "phuong trinh vo nghiem" << endl;
	}

	else if (a == 0 && b == 0)
	{
		cout << "phuong trinh vo so nghiem" << endl;
	}
	else
	{
		cout << "phuong trinh co nghiem x = " << (float)-b / a; //ep kieu
	}
	return 0;
}