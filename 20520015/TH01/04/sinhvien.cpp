#include "sinhvien.h"

void sinhvien::Nhap()
{
	cout << "----------Hay Nhap Thong Tin Sinh Vien----------" << endl;
	cout << "Nhap Ma Sinh Vien: ";
	fflush(stdin);
	cin.getline(MaSv, 10);
	cout << "Nhap Ten: ";
	fflush(stdin);
	getline(cin, HoTen);
	cout << "Nhap Ngay Sinh: ";
	fflush(stdin);
	getline(cin, NgaySinh);
	cout << "Nhap Diem Toan: ";
	cin >> DiemToan;
	cout << "Nhap Diem Van: ";
	cin >> DiemVan;
	cout << "Nhap Diem Anh: ";
	cin >> DiemAnh;
}

void sinhvien::Xuat()
{
	cout << "__________________________\n" << endl;
	cout << "Ma Sinh Vien: " << MaSv << endl;
	cout << "Ten: " << HoTen << endl;
	cout << "Ngay Sinh: " << NgaySinh << endl;
	cout << "Diem Toan: " << DiemToan << endl;
	cout << "Diem Van: " << DiemVan << endl;
	cout << "Diem Anh: " << DiemAnh << endl;
	cout << "Diem Tong: " << sinhvien::TongDiem();
	cout << "Sinh Vien Tong Diem Lon Hon 15: " << sinhvien::Tren15() << endl;
	cout << "__________________________\n";
}

float sinhvien::TongDiem()
{
	return DiemToan + DiemVan + DiemAnh;
}

void sinhvien::Tren15()
{
	if (sinhvien::TongDiem() > 15)
	{
		sinhvien::Xuat();
	}
}