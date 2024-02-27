//write a prg to remove the duplicate items from the array 
#include<iostream>
using namespace std;
int main()
{
	int a[]={1,5,7,5,3,1};
	int l,i,j,k=0,b[50]={};
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(b[j]==a[i])
			{
				break;
			}
		}
		
		cout<<b[i];
	}
}
