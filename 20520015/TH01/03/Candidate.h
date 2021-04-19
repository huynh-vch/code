#pragma once
#include "ngay.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Candidate
{
private:
	string HoTen;
	string MaSinhVien;
	Ngay NgaySinh;
	float MonToan;
	float MonVan;
	float MonAnh;
public:
	void Nhap();
	void Xuat();
	float TongDiem();
};

