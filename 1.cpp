#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"May i now your name"<<endl;
	getline(cin,name);     //getline is used for stirng input 
	cout<<"Welcome"<<name<<endl;
	return 0;
}
