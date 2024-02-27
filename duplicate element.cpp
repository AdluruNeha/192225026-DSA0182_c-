#include<iostream>
using namespace std;
int main()
{
	int a[]={2,5,3,2,1};
	int l,i,j,count=0;
	l=sizeof(a)/sizeof(a[0]);
	cout<<"duplicate element : ";
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				cout<<a[i]<<" ";
				count++;
			}
		}
	}
	if(count==0)
	{
		cout<<"no duplicate element";
	}
}
