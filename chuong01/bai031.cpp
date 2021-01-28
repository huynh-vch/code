#include <iostream>
using namespace std;
#include <math.h>

int main()
{
        cout << "Tinh tong" << endl;
        int n;
        cout << "nhap n=";
        cin >> n;
        float S = 0;
        int i = 1;
        while (i <= 2 * n + 1)
        {
                S = S + 1.00 / i;
                i = i + 2;
        }
        cout << "Tong la S= " << S << endl;

        system("pause");
        return 1;
}