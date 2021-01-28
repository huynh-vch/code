#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            dem = dem + 1;
        i = i + 1;
    }
    if (dem == 2)
        cout << "NT";
    else
    {
        cout << "khong NT";
    }
    system("pause");
    return 1;
}