//reverse a number
#include<iostream>
using namespace std;
class reverse{
	public:
		int n;
		reverse()
		{
			cout<<"reversed number: ";
		}
		reverse(int n)
		{
			int x,sum=0,r;
			x=n;
			while(n!=0)
			{
				r=n%10;
				sum=(sum*10)+r;
				n=n/10;
			}
			cout<<sum;
		}
};

int main()
{
	reverse a;
	reverse a1();
	reverse a2(123);
}
