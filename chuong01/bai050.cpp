#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 050: Tinh tong tat ca uoc so nguyen duong cua n" << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int S = 0;
        int i = 1;
        cout << "Cac uoc so cua so nguyen duong cua n la:" << i << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        S = S + i;
                        cout << i << endl;
                }
                i = i + 1;
        }
        cout << "Tong tat ca ca uoc so cua so nguyen duong cua n la:" << S << endl;

        system("pause");
        return 1;
}