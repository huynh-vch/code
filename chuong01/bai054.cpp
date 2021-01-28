#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 054: Tinh tong uoc so chan cua so nguyen duong n: " << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int S = 0;
        int i = 2;
        cout << "Cac uoc so chan cua so nguyen duong n la: " << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        S = S + i;
                        cout << i << endl;
                }
                i = i + 2;
        }
        cout << "Tong tat ca ca uoc so chan cua so nguyen duong cua n la:" << S << endl;

        system("pause");
        return 1;
}