#include <iostream>
using namespace std;
int main()
{
        cout << "Nhap x1,y1,x2,y2: ";
        cout << endl;
        int x1;
        cout << "x1 = ";
        cin >> x1;

        int y1;
        cout << "y1 = ";
        cin >> y1;
        int x2;
        cout << "x2 = ";
        cin >> x2;
        int y2;
        cout << "y2 = ";
        cin >> y2;

        double kc = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        cout << "khoang cach : " << kc;
        system("pause");
        return 1;
}
