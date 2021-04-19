#pragma once
#include <iostream>
#include <string>
#include "Candidate.h"

using namespace std;

class TestCandidate
{
private:
	int SoThiSinh;

public:
	void NhapGiaTri();
	Candidate* Nhap();
	void ThucThi(Candidate*);
};