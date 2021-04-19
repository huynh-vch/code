#include "Candidate.h"

void Candidate::Nhap()
{
	cout << "\nNhap ho ten: ";
	fflush(stdin);
	getline(cin, HoTen);
	cout << "Nhap ma sinh vien: ";
	fflush(stdin);
	getline(cin, MaSinhVien);
	cout << "Nhap ngay sinh: ";
	NgaySinh.Nhap();
	cout << "Nhap diem toan: ";
	cin >> MonToan;
	cout << "Nhap diem van: ";
	cin >> MonVan;
	cout << "Nhap diem anh: ";
	cin >> MonAnh >> endl;
}
void Candidate::Xuat()
{
	cout << "\nHo Ten: " << HoTen;
	cout << "\nMa sinh vien: " << MaSinhVien;
	cout << "\nNgay Sinh: ";
	NgaySinh.Xuat();
	cout << "\nDiem Toan: " << MonToan;
	cout << "\nDiem Van: " << MonVan;
	cout << "\nDiem Anh: " << MonAnh;
}
float Candidate::TongDiem()
{
	return MonToan + MonVan + MonAnh;
}
