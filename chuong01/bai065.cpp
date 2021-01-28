#include <iostream>
#include <conio.h>
using namespace std;

int min_ChuSoNguyen(int n)
{
    int min;
    while (n > 0)
    {
        int t = n % 10;

        if (t < min)
            min = t;

        n = n / 10;
    }
    return min;
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int min = min_ChuSoNguyen(n);
    cout << "So min cua so nguyen la " << min << endl;
    getch();
}