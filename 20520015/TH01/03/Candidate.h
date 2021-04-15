#pragma once
#include <iostream>
#include <iomanip>
#include <>
#include <string>
using namespace std;

class Candidate
{
private:
	string Msv;
	string HoTen;
	float NgaySinh;
	float DiemToan, DiemVan, DiemAnh;
	float TongDiem;

public:
	void Nhap();
	void Xuat();
	float TongDiem();
	void Tren15();
};

