#include<iostream>
#include"polynomial.h"
#include<cmath>
using namespace std;
polynomial::polynomial() {
	this->NumberOfElement = 0;
	this->x = new double[0 + 1];
	for (int i = 0; i <= this->NumberOfElement; i++) {
		this->x[i] = 0;
	}
}
polynomial::polynomial(int n) {
	this->NumberOfElement = n;
	this->x = new double[NumberOfElement + 1];
	for (int i = 0; i <= this->NumberOfElement; i++) {
		this->x[i] = 0;
	}
}
polynomial::polynomial(const polynomial& PL) {
	this->NumberOfElement = PL.NumberOfElement;
	delete[] this->x;
	this->x = new double[NumberOfElement + 1];
	for (int i = 0; i <= this->NumberOfElement; i++) {
		this->x[i] = PL.x[i];
	}
}
polynomial& polynomial::operator=(const polynomial& PL) {
	if (&PL == this) {
		return *this;
	}
	this->NumberOfElement = PL.NumberOfElement;
	delete[] this->x;
	this->x = new double[NumberOfElement + 1];
	for (int i = 0; i <= this->NumberOfElement; i++) {
		this->x[i] = PL.x[i];
	}
	return *this;
}
polynomial operator+(const polynomial& PL1, const polynomial& PL2) {
	polynomial PL((PL1.NumberOfElement > PL2.NumberOfElement) ? PL1.NumberOfElement : PL2.NumberOfElement);
	for (int i = 0; i <= PL.NumberOfElement; i++) {
		if (i <= PL1.NumberOfElement && i <= PL2.NumberOfElement) {
			PL.x[i] = PL1.x[i] + PL2.x[i];
		}
		else {
			if (i > PL1.NumberOfElement) {
				PL.x[i] = PL2.x[i];
			}
			else if (i > PL2.NumberOfElement) {
				PL.x[i] = PL1.x[i];
			}
			else {
			}
		}
	}
	return PL;
}
polynomial operator-(const polynomial& PL1, const polynomial& PL2) {
	polynomial PL((PL1.NumberOfElement > PL2.NumberOfElement) ? PL1.NumberOfElement : PL2.NumberOfElement);
	for (int i = 0; i <= PL.NumberOfElement; i++) {
		if (i <= PL1.NumberOfElement && i <= PL2.NumberOfElement) {
			PL.x[i] = PL1.x[i] - PL2.x[i];
		}
		else {
			if (i > PL1.NumberOfElement) {
				PL.x[i] = -PL2.x[i];
			}
			else if (i > PL2.NumberOfElement) {
				PL.x[i] = PL1.x[i];
			}
			else {}
		}
	}
	return PL;
}
polynomial operator*(const polynomial& PL1, const polynomial& PL2) {
	polynomial PL(PL1.NumberOfElement + PL2.NumberOfElement);
	for (int i = 0; i <= PL1.NumberOfElement; i++) {
		for (int j = 0; j <= PL2.NumberOfElement; j++) {
			PL.x[i + j] += PL1.x[i] * PL2.x[j];
		}
	}
	return PL;
}
ostream& operator<<(ostream& os, polynomial& PL) {
	for (int i = PL.NumberOfElement; i >= 0; i--) {
		if (PL.x[i] != 0) {
			if (PL.x[i] > 0) {
				if (i != PL.NumberOfElement && PL.PreAllZero(i) == 0) {
					os << " + ";
				}
			}
			else {
				os << " - ";
			}
			if (abs(PL.x[i]) != 1) {
				os << abs(PL.x[i]);
			}
			if (i == 1) {
				os << "X";
			}
			else if (i == 0) {
			}
			else {
				os << "X^" << i;
			}
		}
	}
	return os;
}
istream& operator>>(istream& is, polynomial& PL) {
	delete[] PL.x;
	cout << "Input max exponent: ";
	is >> PL.NumberOfElement;
	cout << "Input value of each exponnent approach high to low: ";
	PL.x = new double[PL.NumberOfElement + 1];
	for (int i = PL.NumberOfElement; i >= 0; i--) {
		is >> PL.x[i];
	}
	return is;
}
polynomial::~polynomial() {
	delete[] this->x;
}