#include <iostream>
using namespace std;

class Hinh
{
public:
	virtual void ve() //ham ao virtual
	{
		cout << "Ve Hinh" << endl;
		//std::cout << "Ve Hinh \n";
		//printf("Ve Hinh"); 
	}
};
class HinhTron : public Hinh

{
	int BanKinh;
public:
	void ve()
	{
		cout << "Ve Hinh Tron" << endl;
		//std::cout << "Ve Hinh Tron \n";
		//printf("ve hinh tron"); //neu dung ham printf thi kg can khai bao using namespace std; o tren
	}
};


int main()
{
	Hinh* h = new HinhTron;//truy xuat kieu con tro
	h->ve();

	return    0;
}