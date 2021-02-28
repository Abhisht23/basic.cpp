//Writing in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("My.txt");
	outfile<<"hello"<<endl;
	outfile<<25<<endl;
	outfile.close();
}
