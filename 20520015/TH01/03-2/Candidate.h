#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Candidate
{
private:
	char Msv[10];
	string HoTen;
	string NgaySinh;
	float DiemToan;
	float DiemVan;
	float DiemAnh;

public:
	void Nhap();
	void Xuat();
	float TongDiem();
};

