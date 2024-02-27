#include<iostream>
using namespace std;
int main()
{
	int n,i,x,r,l;
	cout<<"enter a number :";
	cin>>x;
	n=x;
	while(x!=0)
	{
		r=x%10;
		l=(l*10)+r;
		x=x/10;
	}
	if(n==l)
	{
		cout<<"given number in palindrome";
	}
	else
	{
		cout<<"given number is not a palindrome";
	}
	return 0;
}
