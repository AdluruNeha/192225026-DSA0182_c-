#include<iostream>
using namespace std;
int main()
{
	int n,i,s;
	n=16;
	for(i=1;i<n;i++)
	{
		if(i*i<=n)
		{
			s=i;
		}
		if(i*i>n)
		{
			break;
		}	
	}
	cout<<"square root (rounded down to nearest integer) : "<<s;
	return 0;
}
