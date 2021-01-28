#include <iostream>
using namespace std;

#include <math.h>

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int flag = 1;
    int t = n, du;
    while (t > 1)
    {
        du = t % 2;
        if (du != 0)
        {
            flag = 0;
        }
        t = t / 2;
    }
    if (flag == 1)
    {
        cout << "So nguyen duong co dang 2 mu m" << endl;
    }
    else
        cout << "So nguyen duong khong co dang 2 mu m" << endl;
}