#include <iostream>
using namespace std;
//bai tập tổng hợp kiến thức
//biến, câu lệnh điều kiện
//đề: viét chương trình nhập vào 1 số nguyên từ bàn phím
//kiểm tra xem số đó có phải là số nguyên tố không
//nếu là số nguyên tố thì in ra màn hình: Là số nguyên tố
//nếu không phải là số nguyên tố thì in ra màn hình: Không nguyên tố
//số nguyên tố chỉ chia hết cho 1 và chính nó
int main()
{
	int n;
	cout << "Nhap vao so nguyen: " << endl;
	cin >> n; //vd: n = 5, i = 1,2,3,4,5
	int demuoc = 0;
	for (int i = 1; i <= n; i++) //i chay tu 0 den n
	{
		if (n % i == 0)
		{
			demuoc++;
		}
	}
	if (demuoc == 2)
	{
		cout << "La nguyen to" << endl;
	}
	else
	{
		cout << "Khong la nguyen to" << endl;
	}
}