#include "Candidate.h"

using namespace std;

void Candidate::Nhap()
{
	cout << "Nhap ma sinh vien: " << endl;
	fflush(stdin);
	getline(cin, Msv);
	cout << "Nhap ho ten sinh vien" << endl;
	fflush(stdin);
	getline(cin, HoTen);
	cout << "Nhap diem toan: ";
	cin >> DiemToan;
	cout << "Nhap diem van: ";
	cin >> DiemVan;
	cout << "Nhap diem anh: ";
	cin >> DiemAnh;
}

void Candidate::Xuat()
{
	cout << "\nMa Sinh Vien: " << Msv;
	cout << "\nHo Ten: " << HoTen;
	cout << "\nNgay Sinh: " << NgaySinh;
	cout << "Diem Toan: " << DiemToan;
	cout << "Diem Van: " << DiemVan;
	cout << "Diem Anh: " << DiemAnh;
}

float Candidate::TongDiem()
{
	return  DiemToan + DiemVan + DiemAnh;
}

void Candidate::Tren15()
{
	if (Candidate::TongDiem() > 15)
		Candidate::Xuat();
}
