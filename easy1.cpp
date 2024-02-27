#include<iostream>
using namespace std;
int main()
{
	int l,a[50],i,target,j;
	int count=0;
	cout<<"enter the length of array :";
	cin>>l;
	cout<<"enter elements in array :";
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	cout<<"enter target value :";
	cin>>target;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]+a[j]==target)
			{
				cout<<i<<" , "<<j<<endl;
				count++;
			}
		}
	}
	if(count==0)
	{
		cout<<"no result";
	}
	return 0;
}
