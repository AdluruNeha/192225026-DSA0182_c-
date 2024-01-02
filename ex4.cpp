//c++ program to find quotient and remainder

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,q,r;
	cout<<"enter num1 :";
	cin>>n1;
	cout<<"enter num2 :";
	cin>>n2;
	q=n1/n2;
	r=n1%n2;
	cout<<"quotient :"<<q<<endl;
	cout<<"remainder :"<<r;
	return 0;
}
