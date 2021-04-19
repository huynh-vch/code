#include "Candidate.h"

void Candidate::Nhap()
{
	cout << "Nhap Ma Sinh Vien: ";
	fflush(stdin);
	cin.getline(Msv, 10);
	cout << "Nhap Ho Ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap Ngay sinh: ";
	fflush(stdin);
	getline(cin, NgaySinh);
	cout << "Nhap Diem Toan: ";
	cin >> DiemToan;
	cout << "Nhap Diem Van: ";
	cin >> DiemVan;
	cout << "Nhap Diem Anh: ";
	cin >> DiemAnh;
}

void Candidate::Xuat()
{
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Ngay Sinh: " << NgaySinh << endl;
	cout << "Diem Toan: " << DiemToan << endl;
	cout << "Diem Van: " << DiemVan << endl;
	cout << "Diem Anh: " << DiemAnh << endl;
}

float Candidate::TongDiem()
{
	float kq;
	kq = DiemToan + DiemVan + DiemAnh;
	return kq;
}