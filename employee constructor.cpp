//employee details
#include<iostream>
using namespace std;
class employee{
	public:
		int id;
		employee()
		{
			cin>>id;
			cout<<"employee id :"<<id<<endl;
		}
		~employee()
		{
			cout<<"destructor";
		}
};

int main()
{
	employee a;
	employee a1();
}
