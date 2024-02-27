/*create a base class calles Employee with data members for name,d,and satary Derive two classes Manager and Engineer from the base class. the manager class should have additional data 
members for department and bonus, while the ingineer class should have additional data members for specialty and hours. 
write member functions to get and set the data members for each class*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Employee
{
	public:
		string name;
		int salary;		
};
class Manager: public Employee
{
	public:
		string department;
		int bonus;
		void manager()
		{
			cout<<"Manager details: "<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"department : "<<department<<endl<<endl;
		}
};
class Engineer: public Employee
{
	public:
		string speciality;
		int hours;
		void engineer()
		{
			cout<<"Engineer Details: "<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"speciality : "<<speciality<<endl;
		}
};
int main()
{
	Manager a;
	a.name="ram";
	a.salary=20000;
	a.department="marketing";
	a.manager();
	Engineer b;
	b.name="sam";
	b.salary=10000;
	b.speciality="c programming";
	b.engineer();
}

