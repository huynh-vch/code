#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        cout << "Bai 097: " << endl;
        int x, n;
        cout << "x = ";
        cin >> x;
        cout << "n = ";
        cin >> n;

        double S = 0;
        int T = 1;
        int i = 1;
        while (i <= n)
        {
                T = T * x;
                S = sqrt(T + S);
                i = i + 1;
        }
        cout << "S = " << S << endl;
        
        system("pause");
        return 1;
}