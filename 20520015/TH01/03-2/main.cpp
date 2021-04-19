#include "Candidate.h"
#include "TestCandidate.h"

int main()
{
	/*Candidate thi_sinh;
	thi_sinh.Nhap();
	thi_sinh.Xuat();*/
	TestCandidate test_case;
	test_case.NhapGiaTri();
	Candidate* arr_in = test_case.Nhap();
	test_case.ThucThi(arr_in);
	return 1;
}