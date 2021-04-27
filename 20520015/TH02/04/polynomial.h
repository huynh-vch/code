#ifndef polynomial_H_
#define polynomial_H_
#include<iostream>
using namespace std;
class polynomial
{
private:
	double* x; //arry of Element
	int NumberOfElement;
public:
	polynomial();
	polynomial(int n);
	polynomial(const polynomial& PL);
	polynomial& operator=(const polynomial& PL);
	friend polynomial  operator+(const polynomial& PL1, const polynomial& PL2);
	friend polynomial  operator-(const polynomial& PL1, const polynomial& PL2);
	friend polynomial  operator*(const polynomial& PL1, const polynomial& PL2);
	friend ostream& operator<<(ostream& os, polynomial& PL);
	friend istream& operator>>(istream& is, polynomial& PL);
	bool PreAllZero(int k) {
		for (int i = NumberOfElement; i >= 0; i--) {
			if (i > k && x[i] != 0) {
				return false;
			}
		}
		return true;
	}
	~polynomial();
};

#endif