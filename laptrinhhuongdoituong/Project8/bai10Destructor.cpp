#include<iostream>

using namespace std;

class Nguoi
{
private:
	string ten;
	int tuoi;
public:
	Nguoi() //Constructor: ham tao doi tuong
	{
		ten = "Huynh";
		tuoi = 31;
	}

	~Nguoi()//Destructor: ham huy doi tuong, dung de giai phong cho con tro
	{
		cout << "Huy doi tuong";
	}
	void NoiChuyen()
	{
		cout << "Xin chao \n";
	}
	void Xuat()
	{
		cout << ten << "-" << tuoi << endl;
	}
};

int main()
{
	Nguoi a;
	a.NoiChuyen();
	a.Xuat();
	return 0;
}