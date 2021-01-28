#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int x;
    cout << "Nhap x = ";
    cin >> x;

    if (x < 0)
    {
        cout << "Ket qua la " << -2 * x * x * x + 6 * x + 9 << endl;
    }
    else if (x >= 0 && x <= 1)
    {
        cout << "Ket qua la " << 5 * x - 7 << endl;
    }
    else
        cout << "Ket qua la " << 2 * x * x * x + 5 * x * x - 8 * x + 3 << endl;

    system("pause");
    return 1;
}
