#include "candidate.h"
using namespace std;
void candidate::Nhap()
{
	cin.ignore();
	cout << "Nhap ma thi sinh: ";
	getline(std::cin, ma);
	cout << "Nhap ten thi sinh: ";
	getline(std::cin, ten);
	cout << "Nhap ngay sinh: ";
	cin >> ngay;
	cout << "Nhap thang sinh: ";
	cin >> thang;
	cout << "Nhap nam sinh: ";
	cin >> nam;
	cout << "Nhap diem Toan: ";
	cin >> diemtoan;
	cout << "Nhap diem Van: ";
	cin >> diemvan;
	cout << "Nhap diem Anh: ";
	cin >> diemanh;
}
void candidate::Xuat()
{
	cout << "\n";
	cout << "Ma thi sinh: " << ma << endl;
	cout << "Ten thi sinh: " << ten << endl;
	cout << "Ngay thang nam sinh cua thi sinh:" << ngay << "-" << thang << "-" << nam << endl;
	cout << "Diem mon Toan:" << diemtoan << endl;
	cout << "Diem mon Van:" << diemvan << endl;
	cout << "Diem mon Anh: " << diemanh << endl;
}
int candidate::Tongdiem()
{
	int s = diemtoan + diemvan + diemanh;
	return s;
}