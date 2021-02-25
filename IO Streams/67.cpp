//Writing in a File
#include<iostream>
using namespace std;
int main()
{
	ofstream of("Test.txt",ios::trunc);
	of<<"John"<<endl;
	of<<25<<endl;
	of<<"CS"<<endl;
	of.close();
}
//Reading from File
#include<iostream>
using namespace std;
int main()
{
	ifstream ifs("Test.txt");
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	cout<<name<<endl<<roll<<endl<<branch<<endl;
	ifs.close();
}
