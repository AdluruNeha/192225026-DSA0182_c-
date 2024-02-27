//create a dynamic 2D array using pointers and display the values
#include<iostream>
using namespace std;
int main()
{
	int m,n,a=0,i,j;
	int* pt=new int[m*n];
	cout<<"enter no of rows";
	cin>>m;
	cout<<"enter no of columns";
	cin>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(pt+i*n+j)=++a;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<*(pt+i*n+j)<<"\t";
		}
		cout<<"\n";
	}
	
}
