#include <iostream>
using namespace std;

int Min_SoNguyen(int N)
{
    int Min = 9;
    while (N > 0)
    {
        int t = N % 10;

        if (t < Min)
            Min = t;

        N = N / 10;
    }
    return Min;
}

int Dem_SoMin(int N)
{
    int dem = 0;
    int X = Min_SoNguyen(N);
    while (N > 0)
    {
        int t = N % 10;

        if (t == X)
            dem++;

        N = N / 10;
    }
    return dem;
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int dem_min = Dem_SoMin(N);
    cout << "So luong so nho nhat la " << dem_min << endl;

    system("pause");
    return 0;
}