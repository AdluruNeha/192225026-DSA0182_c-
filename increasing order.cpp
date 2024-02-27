#include<iostream>
using namespace std;
int main()
{
	int a[50],i,l,j,temp;
	cout<<"enter  no of elem in array : ";
	cin>>l;
	cout<<"enter elem in array : ";
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"increasing order : ";
	for(i=0;i<l;i++)
	{
		cout<<a[i]<<" ";
	}
}
