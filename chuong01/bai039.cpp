#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        cout << "Bai 039: Tinh S" << endl;
        int n;
        cout << "n = ";
        cin >> n;
        double S = 1;
        int i = 1;

        while (i <= n)
        {
                S = S * (1 + float(1) / pow(i, 2));
                i = i + 1;
        }
        cout << "S = " << S << endl;

        system("pause");
        return 1;
}