#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 053: Liet ke uoc so le cua so nguyen duong n: " << endl;
        int n;
        cout << "n = ";
        cin >> n;

        int i = 1;
        cout << "Cac uoc so le cua so nguyen duong n la: " << endl;
        while (i <= n)
        {
                if (n % i == 0)
                {
                        cout << i << endl;
                }
                i = i + 2;
        }

        system("pause");
        return 1;
}