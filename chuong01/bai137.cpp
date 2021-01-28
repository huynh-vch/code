#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int x;
    cout << "Nhap x = ";
    cin >> x;

    if (x < 5)
    {
        cout << "Ket qua la " << -2 * x * x + 4 * x - 9 << endl;
    }
    else
        cout << "Ket qua la " << 2 * x * x + 5 * x + 9 << endl;

    system("pause");
    return 1;
}
