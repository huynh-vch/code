#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = abs(n);
    while (temp >= 10)
    {
        temp /= 10;
    }
    cout << "chu so dau tien cua so:" << n << "la:" << temp << endl;
    
    system("pause");
    return 0;
}