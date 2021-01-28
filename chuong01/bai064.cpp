#include <iostream>
#include <conio.h>
using namespace std;

int Max_ChuSoNguyen(int n)
{
    int max = 0;
    while (n > 0)
    {
        int t = n % 10;

        if (t > max)
            max = t;

        n = n / 10;
    }
    return max;
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int max = Max_ChuSoNguyen(n);
    cout << "So Max cua so nguyen la " << max << endl;
    getch();
}