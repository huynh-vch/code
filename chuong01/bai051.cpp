#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 051: Tinh tich tat ca uoc so nguyen duong cua n" << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int T = 1;
        int i = 1;
        cout << "Cac uoc so cua so nguyen duong cua n la:" << i << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        T = T * i;
                        cout << i << endl;
                }
                i = i + 1;
        }
        cout << "Tich tat ca ca uoc so cua so nguyen duong cua n la:" << T << endl;
        
        system("pause");
        return 1;
}