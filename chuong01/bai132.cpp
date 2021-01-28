#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
        cout << "Bai 132:" << endl;
        cout << "Nhap xa,ya,xb,yb,xc,yc,xm,ym: " << endl;
        int xa;
        cout << "xa= ";
        cin >> xa;
        int ya;
        cout << "ya= ";
        cin >> ya;

        int xb;
        cout << "xb= ";
        cin >> xb;
        int yb;
        cout << "yb= ";
        cin >> yb;

        int xc;
        cout << "xc = ";
        cin >> xc;
        int yc;
        cout << "yc = ";
        cin >> yc;

        int xm;
        cout << "xm= ";
        cin >> xm;
        int ym;
        cout << "ym= ";
        cin >> ym;

        float Sabc = (1.0 / 2) * abs(xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc);
        float Smbc = (1.0 / 2) * abs(xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc);
        float Smab = (1.0 / 2) * abs(xm * ya + xa * yb + xb * ym - xa * ym - xb * ya - xm * yb);
        float Smac = (1.0 / 2) * abs(xm * ya + xa * yc + xc * ym - xa * ym - xc * ya - xm * yc);
        if (Sabc == Smab + Smac + Smbc)
        {
                cout << "Diem M tam giac ABC" << endl;
        }
        else
        {
                cout << "Diem M nam ngoai tam giac ABC" << endl;
        }

        system("pause");
        return 1;
}
