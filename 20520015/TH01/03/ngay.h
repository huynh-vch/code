#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Ngay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap()
	{
		cout << endl;
		cin >> ngay >> thang >> nam;
	}
	void Xuat()
	{
		cout << ngay << "/" << thang << "/" << nam;
	}
};