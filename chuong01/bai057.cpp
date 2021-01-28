#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 057: Tinh tong cac uoc so nho honn cua so nguyen duong n: " << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int S = 0;
        int i = 1;
        cout << "Cac uoc so cua so nguyen duong n la: " << endl;
        while (i < n)
        {
                if (n % i == 0)
                {
                        S = S + i;
                        cout << i << endl;
                }
                i = i + 1;
        }
        cout << "Tong cac uoc so nho hon n cua so nguyen duong cua n la:" << S << endl;
        system("pause");
        return 1;
}