#include<iostream>
using namespace std;
int binarysearch(int a[50],int l,int key)
{
	int low,high,mid;
	low=0;
	high=l-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		return mid;
		else if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
}

int main()
{
	int a[]={1,2,3,4,5};
	int l,index,key;
	l=sizeof(a)/sizeof(a[0]);
	key=2;
	index=binarysearch(a,l,key);
	if(index==-1)
	{
		cout<<"given element is not present in array";
	}
	else
	{
		cout<<"element is present at index : "<<index;
	}
}
