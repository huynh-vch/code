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
        while (i <= n)
        {
                S = S + 1.00 / (i * (i + 1));
                i = i + 2;
        }
        cout << "Tong la S= " << S << endl;

        system("pause");
        return 1;
}