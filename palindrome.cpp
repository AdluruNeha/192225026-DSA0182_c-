//palindrome
#include<iostream>
using namespace std;
class p{
	public:
		
	    int n;
	    int l;
	    void palindrome();
};
inline void p::palindrome()
{
	int sum=0,r,x;
	cin>>n;
	x=n;
	while(n!=0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==x)
	 cout<<"palindrome";
	else
	 cout<<"not a palindrome";
	
}

int main()
{
	p a;
	a.palindrome();
	return 0;
}
