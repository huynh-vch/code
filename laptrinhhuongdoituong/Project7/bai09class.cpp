#include <iostream>

using namespace std;
class SinhVien //mot class bao thuoc tinh & phuong thuc
{
private: //thuoc tinh
	string msv;
	string tensv;
	int tuoi;
public: //phuong thuc
	SinhVien()
	{
		msv = "20520015";
		tensv = "Huynh";
		tuoi = 31;
	}
	void NoiChuyenTrongGio()
	{
		cout << "Noi linh tinh" << endl;

	}
	void ChoiGame()
	{
		cout << "Choi game" << endl;
	}
	void HocBai()
	{
		cout << "Doc sach" << endl;
	}
	void InThongTin()
	{
		cout << msv << "-" << tensv << "-" << tuoi << endl;
	}
};

int main()
{
	SinhVien a;
	/*a.ChoiGame();*/
	a.InThongTin();
	return 0;
}