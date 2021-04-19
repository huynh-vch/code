#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
private:
	float SoThuc, SoAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc B);
	SoPhuc Tru(SoPhuc B);
	SoPhuc Nhan(SoPhuc B);
	SoPhuc Tich(SoPhuc B);
};