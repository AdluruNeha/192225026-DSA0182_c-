//binary search algorithm
#include<iostream>
using namespace std;
int binarysearch(int a[],int key,int s)
{
	int h,l,mid;
	h=s-1;
	l=0;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==mid)
		{
			return mid-1;
		}
		else if(key<mid)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}
int main()
{
	int a[]={1,2,3,4,5};
	int key,s,r;
	cout<<"enter number to search";
	cin>>key;
	s=sizeof(a)/sizeof(a[0]);
	r=binarysearch(a,key,s);
	if(r==-1)
	{
		cout<<"Not found";
	}
	else
	{
		cout<<"found at index : "<<r;
	}
	return 0;
}
