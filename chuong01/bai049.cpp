#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 049: Liet ke tat ca uoc so nguyen duong cua n" << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int i = 1;
        cout << "Cac uoc so cua so nguyen duong cua n la:" << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        cout << i << endl;
                }
                i = i + 1;
        }
        system("pause");
        return 1;
}