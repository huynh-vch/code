#include <iostream>
using namespace std;

//hàm friend để truy xuất thuộc tính khi đang ở ngoài class
class SoPhuc
{
private:
	int thuc;
	int ao;

public:
	SoPhuc()
	{
		thuc = 5;
		ao = 3;
	}
	void Xuat()
	{
		cout << thuc << "," << ao << endl;
	}
	friend void Cong2SoPhuc(SoPhuc a, SoPhuc b);
};

void Cong2SoPhuc(SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c.thuc = a.thuc + b.thuc;
	c.ao = a.ao + b.ao;
	c.Xuat();
}

int main()
{
	SoPhuc a, b, c;
	Cong2SoPhuc(a, b);
	return 0;
}