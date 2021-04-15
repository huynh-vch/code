#include <iostream>
using namespace std;
//IF, ELSE Câu lệnh điều kiện

int main()
{
	//int a = 3;
	//int b = 3;
	int a, b;
	cout << "Nhap A" << endl;
	cin >> a;
	cout << "Nhap B" << endl;
	cin >> b;

	if (a > b)
	{
		//cau lenh neu dieu kien dung
		cout << "A lon hon B" << endl;
	}
	else if (a == b)
	{
		cout << "A bang B" << endl;
	}
	else
	{
		//cau lenh if sai
		cout << "A nho hon B" << endl;
	}
	return 0;
}