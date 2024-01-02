//c++ program to swap two numbers

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,t;
	cout<<"enter num1 :";
	cin>>n1;
	cout<<"enter num2 :";
	cin>>n2;
	t=n1;
	n1=n2;
	n2=t;
	cout<<"n1 is :"<<n1<<endl;
	cout<<"n2 is :"<<n2;
	return 0;
}
