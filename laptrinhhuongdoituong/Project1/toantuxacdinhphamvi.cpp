#include <iostream>
using namespace std;
int x = 5;
// :: là toán tử xác đinh phạm vi, dùng để truy xuất một phần tử bị che bởi phạm vi hiện thời
int main()
{
	int x = 16;
	cout << "x o trong main = " << x << endl;
	cout << "x o ngoai main = " << ::x << endl;
	return 0;
}