#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,sum=0,l,j,mul;
	int a[]={1,0,1,0,1};
	l=sizeof(a)/sizeof(a[0]);
	for(i=l-1,j=0;i>=0&&j<l;i--,j++)
	{
		mul=pow(2,i)*a[j];
		sum+=mul;
	}
	cout<<"dicimal form: "<<sum;
}
