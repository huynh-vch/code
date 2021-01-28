#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int i = 2, n;
    long long int at = 2, bt = 1;
    long long int ahh, bhh;
    cout << "Nhap vao n = ";
    cin >> n;

    while (i <= n)
    {
        ahh = at * at + 2 * bt * bt;
        bhh = 2 * at * bt;
        at = ahh;
        bt = bhh;
        i = i + 1;
    }

    cout << " So hang thu " << n << " la: " << ahh << " va " << bhh;
    
    system("pause");
    return 1;
}
