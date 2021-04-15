#include <iostream>
using namespace std;

class Nguoi
{
protected: // thuoc tinh bao ve, trung gian giua private & pucblic
	string ten;
	int tuoi;
public:
	void NoiChuyen()
	{
		cout << "Xin chao moi nguoi" << endl;
	}
};

class SinhVien : public Nguoi
{
	string msv;
public:
	SinhVien() //Constructor: ham trung ten voi class
	{
		ten = "Huynh";
		tuoi = 31;
		msv = "20520015";
	}
	void xuat()
	{
		cout << "ten la: " << ten << " " << tuoi << " " << msv << endl;
	}
	//Sinh vien se co thuoc tinh ten la protected, thao cai nao chat che hon
};

int main()
{
	SinhVien a;
	//a.xuat();
	//a.NoiChuyen();
	Nguoi* g = new SinhVien;
	g->NoiChuyen(); //truy xuat bang con tro, toan tu -> truy xua
	((SinhVien*)g)->xuat(); //ep kieu con tro doi tuong

}