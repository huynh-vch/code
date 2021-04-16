#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class sinhvien
{
private:
	char MaSv[10];
	string HoTen, NgaySinh;
	float DiemToan, DiemVan, DiemAnh;
	float TongDiem;
public:
	void Nhap();
	void Xuat();
	float TongDiem();
	void Tren15();
};

