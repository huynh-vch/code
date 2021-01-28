#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 067: Kiem tra chu so nguyen duong n co ton tai so le ko " << endl;
        int n, flag, t, dv;
        cout << "n = ";
        cin >> n;

        n = abs(n);
        flag = 0;
        t = n;
        while (t != 0)
        {
                dv = t % 10;
                if ((dv % 2) != 0)
                {
                        flag = 1;
                }
                t = t / 10;
        }
        if (flag == 1)
        {
                cout << "ton tai" << endl;
        }
        else
        {
                cout << "khong ton tai" << endl;
        }
        system("pause");
        return 1;
}