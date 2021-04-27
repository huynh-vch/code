#include<iostream>
#include"polynomial.h"
using namespace std;
int main() {
	polynomial PL1;
	polynomial PL2;
	cout << "Set to PL1: " << endl;
	cin >> PL1;
	cout << "Set to PL2: " << endl;
	cin >> PL2;
	cout << "abc" << endl;
	polynomial AddPL = PL1 + PL2;
	cout << "ADD PL1 and PL2: " << AddPL << endl;
	polynomial SubDT = PL1 - PL2;
	cout << "Sub PL1 adn PL2: " << SubDT << endl;
	polynomial MultiPL = PL1 * PL2;
	cout << "MulPL1 and PL2: " << MultiPL << endl;
	return 0;
}