#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 056: Dem so luong uoc so chan cua so nguyen duong n: " << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int dem = 0;
        int i = 2;
        cout << "Cac uoc so chan cua so nguyen duong n la: " << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        dem = dem++;
                        cout << i << endl;
                }
                i = i + 2;
        }
        cout << "So luong uoc so chan cua so nguyen duong cua n la:" << dem << endl;
        system("pause");
        return 1;
}