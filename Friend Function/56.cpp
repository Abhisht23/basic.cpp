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
			addNo++;
		}
		Student(string n)
		{
			addNo++;
			roll=addNo;
			name=n;
		}
		void display()
		{
			cout<<"Name "<<name<<endl<<"Roll "<<roll<< "addmissionNo." << addNo<<endl;
		}
		static void get_add_no()
		{
			cout << addNo << endl;
		}
};
int Student::addNo=0;
int main()
{
	string n;
	Student s[100];
	for(int i=1;i<=5;i++)
	{
		cout << "Enetr name ";
		cin >> n;
		s[i].name = n;
		s[i].roll =i;
//		s[i].addNo =s[i].roll;
	}

	for(int i=1;i<=5;i++)
	{
		cout<<s[i].name<<s[i].roll<<endl;
	}
//	cout << s[1].name<<" "<<s[1].roll<<endl;
//	cout << s[2].name;
//	cout << s[3].name;
	cout<<"Number Admission "<<Student::addNo<<endl;
}
