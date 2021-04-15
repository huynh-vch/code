#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class sinhvien
{
private:
	char msv[10];
	string HoTen;
	int tuoi;
	int diem;
public:
	void Nhap();
	void Xuat();
};