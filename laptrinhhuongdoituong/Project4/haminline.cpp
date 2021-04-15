#include <iostream>
using namespace std;

//tinh dien tich hinh chu nhat
inline int TinhDienTich(int cd, int cr)
//inline: khai báo từ khóa
//int: kiểu trả về của hàm
//TinhDienTich: tên hàm
//(int cd, int cr): parameter (tham số truyền vào)
{
	return cd * cr;
}
int main()
{
	int d = 5;
	int r = 4;
	cout << "Dien tich hinh chu nhat la: " << TinhDienTich(d, r);
}