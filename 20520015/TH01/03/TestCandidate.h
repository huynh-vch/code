#pragma once
#include "Candidate.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class TestCandidate
{
private:
	int	SoThiSinh;
	Candidate* thi_sinh;
public:
	void Nhap();
	void Xuat();
	void XuLy();
};

