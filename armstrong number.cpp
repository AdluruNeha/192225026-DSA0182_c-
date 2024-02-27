//armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,x,r,sum=0,a,y,count=0,b[30],i=0;
	cin>>n;
	x=n;
	y=n;
	while(n!=0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;
	}
	if(y==sum)
    	cout<<"armstrong number";
	else
    	cout<<"not an armstrong number";
}
