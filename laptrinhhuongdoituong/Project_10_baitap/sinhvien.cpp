#include "sinhvien.h"

void sinhvien::Nhap()
{
	cout << "Nhap thong tin: " << endl;
	cout << "Nhap MaSV: " << endl;
	fflush(stdin); // xoa bo nho dem ban phim
	cin.getline(msv, 10);
	cout << "Nhap ho ten: " << endl;
	fflush(stdin);// xoa bo nho dem ban phim
	getline(cin, HoTen);
	cout << "Nhap tuoi: " << endl;
	cin >> tuoi;
	cout << "Nhap diem: " << endl;
	cin >> diem;
}
void sinhvien::Xuat()
{
	cout << "n________________________\n";
	cout << "Ma SV : " << msv << endl;
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Tuoi  : " << tuoi << endl;
	cout << "Diem  : " << diem << endl;
}
