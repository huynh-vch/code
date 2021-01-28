#include <iostream>
using namespace std;

int main()
{
    cout << "bai 112,tinh pi do chinh xac 10^-6 theo chuoi" << endl;
    double s = 4 - (2 / 4) - (1 / 5) - (1 / 6);
    double e = 1;
    int T = 1;
    int i = 1;
    while (e >= pow(10, -6))
    {
        T = T * 6;
        e = ((4 / (8 * 1 + 1)) - (2 / (8 * i + 4)) - (1 / (8 * i + 5)) - (1 / (8 * i + 6))) / T;
        s = s + e;
        i = i + 1;
    }
    cout << "pi= " << s << endl;

    system("pause");
    return 1;
}