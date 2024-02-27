//dicimal to hexadecimal
//input : 2545
//output : 9F1

#include<iostream>
using namespace std;
int main()
{
	int num,a,rem;
	string sol="";
	char x;
	cout<<"enter any decimal number";
	cin>>num;
	while(num!=0)
	{
		rem=num%16;
		if(rem < 10)
		{
			x = rem+48;
		}
		else
		{
			x =rem+55;
		}
		sol += x;
		num/=10;
	}
	int i=0,j=sol.size()-1;
	while(i<=j)
	{
		swap(sol[i],sol[j]);
		i++;
		j--;
	}
	cout<<"hexadecimal value of given decimal number : ",sol;
}
