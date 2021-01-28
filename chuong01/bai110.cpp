#include <iostream>
using namespace std;

int main()
{
    cout << "bai 110,tinh pi do chinh xac 10^-6 theo chuoi" << endl;
    double s = 0;
    double e = 1;
    int dau = 1;
    int i = 1;
    while (e >= pow(10, -6))
    {
        e = (float)4 / (i + 2);
        s = s + dau * e;
        i = i + 2;
        dau = -dau;
    }
    cout << "pi= " << s << endl;
    
    system("pause");
    return 1;
}