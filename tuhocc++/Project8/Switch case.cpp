#include <iostream>
using namespace std;

int main()
{
	int select;
	cout << "Nhap lua chon" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
	{
		//lenh khi select =1
		cout << "Lenh 1" << endl;
		break;//break dung tai diem do
	}
	case 2:
	{
		//lenh khi select =2
		cout << "Lenh 2" << endl;
		break;
	}
	case 3:
	{
		//lenh khi select =3
		cout << "Lenh 3" << endl;
		break;
	}
	default:
	{
		cout << "Mac dinh" << endl;
	}
	}
	return 0;
}