//sum of series using constructor
#include<iostream>
using namespace std;
class s{
	public:
		int n;
		sum(int n)
		{
			int i,s;
			/*for(i=1;i<=n;i++)
			{
				s+=i;
			}*/
			s=(n*n+n)/2;
			cout<<"sum is "<<s<<endl;
		}
		sum(int a,int b)
		{
			int sm=0,i;
			for(i=a;i<=b;i++)
			{
				sm+=i;
			}
			cout<<"sum is "<<sm;
		}
	
};

int main()
{
	s a;
	a.sum(5);
	a.sum(2,5);
	return 0;
}
