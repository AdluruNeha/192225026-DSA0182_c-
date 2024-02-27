//overload a function to find an absolute value of an integer and absolute value of floating point number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class check
{
	public:
		void value(int n)
		{
			cout<<"absolute value of"<<n<<"is "<<abs(n)<<endl;
		}
		void value(double m)
		{
			cout<<"absolute value of"<<m<<"is "<<abs(m);
		}
};
int main()
{
	check a;
	a.value(-3);
	a.value(2.4); 
}
