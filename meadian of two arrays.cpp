//meadian of two sorted arrays
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solution(int arr1[],int arr2[],int i,int j)
{
	int l,arr3[i+j],m,n,meadian,x,c;
	l=i+j;
	for(m=0;m<i;m++)
	{
		arr3[m]=arr1[m];
	}
	int a=0;
	for(n=i;n<l;n++)
	{
		arr3[n]=arr2[a++];
		
	}
	
	sort(arr3,arr3+l);
	for(c=0;c<l;c++)
	{
		cout<<arr3[c]<<"\n";
	}
	if(l%2==0)
	{
		x=(l/2);
		meadian=(arr3[x]+arr3[x-1])/2.0;
		return meadian;
	}
	else
	{
		x=(l/2);
		meadian=arr3[x];
		return meadian;
	}
}

int main()
{
	int a[]={5,2,3,8};
	int b[]={1,4,6,7};
	int i,j;
	i=sizeof(a)/sizeof(a[0]);
	j=sizeof(b)/sizeof(b[0]);
	int ans;
	ans=solution(a,b,i,j);
	cout<<"Meadian : "<<ans;
}
