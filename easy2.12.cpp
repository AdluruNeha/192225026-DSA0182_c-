#include<iostream>
using namespace std;
int main()
{
	int a[]={9};
	int l,b[50],num=0,i;
	l=sizeof(a)/sizeof(a[0]);
	a[l-1]=a[l-1]+1;
	cout<<"[";
	for(i=0;i<l;i++)
	{
		cout<<a[i];
	}
	cout<<"]";
	return 0;
}
