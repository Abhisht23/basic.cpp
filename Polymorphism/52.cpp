//Area and Perimter Using polymorphism
#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual float perimeter()=0;						//pure virtual function
		virtual float area()=0;
};
class Rectangle:public Shape
{
	private:
		int lenght;
		int breadth;
	public:
		Rectangle(int l=1,int b=1)
		{
			lenght=l;
			breadth=b;
		}
	float perimeter()
	{
		return 2*(lenght+breadth);
	}	
	float area()
	{
		return lenght*breadth;
	}
};
class Circle: public Shape
{
	private:
		int radius;
	public:
		Circle(float r=1)
		{
			radius=r;
		}
		float perimeter()
		{
			return 2*3.14*radius;
		}
		float area()
		{
			return 3.14*radius *radius;
		}
};
int main()
{
	Shape *s=new Circle(5);                                                    //to call overiddeded function 
	cout<<"Area of Circle "<<s->area()<<endl;
	cout<<"Circumference of Circle "<<s->perimeter()<<endl;
	s=new Rectangle(10,15);														
	cout<<"Perimeter of Rectangle"<<s->perimeter();
	cout<<"Area of Rectangle"<<s->area();
	return 0;
}
