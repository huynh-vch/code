#include <iostream>
using namespace std;
//in ra cac so le tu 0 den 100
int main()
{
	int i = 1;
	while (i < 100)
	{
		if (i % 2 != 0)
		{
			cout << i << endl;
		}
		i++;
	}
	return 0;
}