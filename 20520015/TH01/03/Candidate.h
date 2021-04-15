#pragma once
#include <iostream>
#include <iomanip>
#include <>
#include <string>
using namespace std;

class Candidate
{
private:
	char Msv[10];
	string HoTen;
	float NgaySinh;
	float DiemToan, DiemVan, DiemAnh;

public:
	void Nhap();
	float TongDiem();
	void Xuat();
	void Tren15();
};

