//C++ Program to Find Largest Number Among Three Numbers

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,l;
	cout<<"enter num1 :";
	cin>>n1;
	cout<<"enter num2 :";
	cin>>n2;
	cout<<"enter num3 :";
	cin>>n3;
	l=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
	cout<<"largest number among given numbers is "<<l;
	return 0;
}
