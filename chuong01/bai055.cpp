#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 055: Tinh tich uoc so le cua so nguyen duong n: " << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int T = 1;
        int i = 1;
        cout << "Cac uoc so le cua so nguyen duong n la: " << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        T = T * i;
                        cout << i << endl;
                }
                i = i + 2;
        }
        cout << "Tich tat ca ca uoc so le cua so nguyen duong cua n la:" << T << endl;
        system("pause");
        return 1;
}