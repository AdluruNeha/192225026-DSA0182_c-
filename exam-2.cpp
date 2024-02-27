//check if the integer is divisible by 3 or not using ternary conditional operator
#include<iostream>
using namespace std;
class check
{
	public:
		int n,x,i;
		void divisible()
		{
			cin>>n;
			(n%3==0)?cout<<"Giver number is divisible by 3":cout<<"Given number is not divisible by 3";
		}
};
int main()
{
	check a;
	a.divisible();
	return 0;
}
