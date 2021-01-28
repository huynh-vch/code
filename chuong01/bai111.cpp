#include <iostream>
using namespace std;

int main()
{
    cout << "bai 111,tinh pi do chinh xac 10^-6 theo chuoi" << endl;
    double s = 3;
    double e = 1;
    int dau = 1;
    int i = 2;
    while (e >= pow(10, -6))
    {
        e = (float)4 / (i * (i + 1) * (i + 2));
        s = s + dau * e;
        i = i + 2;
        dau = -dau;
    }
    cout << "pi= " << s << endl;
    
    system("pause");
    return 1;
}