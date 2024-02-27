//prgm to check the number is positive, negative or zero
#include<iostream>
using namespace std;
class check
{
	public:
		int n,x,i;
		check()
		{
			cin>>n;
			if(n==0)
			{
				cout<<"Number is Zero";
			}
			else if(n<0)
			{
				cout<<"Number is Negative";
			}
			else
			{
				cout<<"Number is Positive";
			}
		}
};
int main()
{
	check a;
	return 0;
}
