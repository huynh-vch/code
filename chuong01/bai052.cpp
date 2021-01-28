#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 052: Dem so luong uoc so nguyen duong cua n" << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int dem = 0;
        int i = 1;
        cout << "Cac uoc so cua so nguyen duong cua n la:" << i << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        dem = dem++;
                        cout << i << endl;
                }
                i = i + 1;
        }
        cout << "So luong cac uoc so cua so nguyen duong cua n la:" << dem << endl;

        system("pause");
        return 1;
}