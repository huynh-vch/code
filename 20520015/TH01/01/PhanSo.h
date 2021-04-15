#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	float TuSo, MauSo;
public:
	void Nhap();
	void Xuat();

	PhanSo Tong(PhanSo B);
	PhanSo Tich(PhanSo B);
	PhanSo Tru(PhanSo B);
};

