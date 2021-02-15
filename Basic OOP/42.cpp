//Add complex number using friend Function
#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
int main()
{
	Complex c1(4,5);
	Complex c2(3.9);
	Complex c3;
	c3=c1+c2;
	c3.display();
	return 0;
}
