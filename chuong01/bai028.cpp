#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        cout << "Tinh tong" << endl;
        int n;
        cout << "nhap n=";
        cin >> n;
        int S = 0;
        int i = 1;
        while (i <= n)
        {
                S = S + i * i;
                i = i + 1;
        }
        cout << "Tong la S= " << S;

        cout << endl;
        system("pause");
        return 1;
}