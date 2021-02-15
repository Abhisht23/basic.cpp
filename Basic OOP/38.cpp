//Calculating perimeter and area using Class and object
#include<iostream>
using namespace std;
class Rectangle
{
public:
	int length;
	int breadth;
	
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	Rectangle r1,r2;
	r1.length=10;
	r1.breadth=20;
	cout<<r1.area()<<endl;
	cout<<r1.perimeter()<<endl;
	
	r2.length=5;
	r2.breadth=15;
	cout<<r2.area()<<endl;
	cout<<r2.perimeter()<<endl;
}
