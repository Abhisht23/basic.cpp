//Employee problem using inheritance
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
		int eid;
		string name;
	public:
		Employee(int e,string n)
		{
			eid=e;
			name=n;
		}
		int getEmployeeId()
		{
			return eid;
		}
		int getName()
		{
			cout<<name;
		}
};
class partTime:public Employee
{
	private:
		int wage;
	public:
		partTime(int e,string n,int w):Employee(e,n)
		{
			wage=w;
		}
		int getWage()
		{
			return wage;
		}		
};
class fullTime: public Employee
{
	private:
		int salary;
	public:
		fullTime(int e,string n,int sal):Employee(e,n)
		{
			salary=sal;
		}
		int getSalary()
		{
			return salary;
		}
};
int main()
{
	partTime e1(893,"abhisht",2000);
	fullTime e2(692,"prameet",5000);
	e1.getName();
	return 0;
}
