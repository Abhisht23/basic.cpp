#include <iostream>
#include<string>
using namespace std;
class Student
{
	public:
	int roll;
	string name;
	static int addNo;
	Student()
	{
		
	}
	Student(string n)
	{
		name=n;
		addNo++;
		roll=addNo;
	}
void display()
{
	cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
}
};
int Student::addNo=0;
int main()
{
	string name;
	cout<<"enter the name"<<endl;
	cin>>name;
//	Student s1("don");                       
//	Student s2("Ravi");
//	Student s3("sir");
//	Student s4("man");
//	Student s5("tan");
//	Student s6("fan");
	Student s1(name);
	s1.display();
//	s6.display();
	cout<<"Number Admission "<<Student::addNo<<endl;
	return 0;
}
