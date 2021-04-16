#pragma once
#include<iostream>
#include<string>
using namespace std;

class candidate
{
private:
	string ma, ten;
	int ngay, thang, nam;
	double diemtoan, diemvan, diemanh;
public:
	void Nhap();
	void Xuat();
	int Tongdiem();
};

