#include <iostream>
using namespace std;

int main()
{
        cout << "Nhap F: " << endl;
        int F;
        cin >> F;

        float C = (float(5 * F) / 9) - 32;
        cout << "Do C la: " << C;
        system("pause");
        return 1;
}