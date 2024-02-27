//c++ prgm to demonstrate to use of try-catch blocks for handling exceptions
#include<iostream>
using namespace std;
int main()
{
	int i,n=4;
	try
	{
		if(n>0)
		{
			throw n;
		}
		for(i=5;i<0;i++)
		{
			cout<<"nice try";
		}
	}
	catch(int n)
	{
		string e="logicalerror";
		cout<<e<<endl;
	}
	return 0;
}
