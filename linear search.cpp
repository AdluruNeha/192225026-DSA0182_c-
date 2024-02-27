#include<iostream>
using namespace std;
int main()
{
	int key,i,a[50],l,count=0;
	cout<<"enter no of elem in array : ";
	cin>>l;
	cout<<"enter elem in array : ";
	for(i=0;i<l;i++)
	{
		cin>>a[i];
	}
	cout<<"enter elem to search : ";
	cin>>key;
	for(i=0;i<l;i++)
	{
		if(a[i]==key)
		{
			cout<<"given element is at index : "<<i;
			count++;
		}
	}
	if(count==0)
	cout<<"given element is not present in array";
}
