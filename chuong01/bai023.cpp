#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 023: Tim chu so hang chuc cua so nguyen duong n" << endl;
        int n;
        cout << "n = ";
        cin >> n;
        double dv = (n / 10) % 10;
        cout << "Chu so hang chuc cua so nguyen duong n la: " << dv;
        system("pause");
        return 1;
}