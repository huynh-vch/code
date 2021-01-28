
#include <iostream>
using namespace std;
#include <math.h>

int main()
{
        double n, r, s;
        cout << "Nhap canh:";
        cin >> n;
        cout << "Ban kinh:";
        cin >> r;

        s = 0.5 * n * r * r * sin(2 * 3.14159265 / n);
        cout << "S: " << s;
        system("pause");
        return 0;
}
