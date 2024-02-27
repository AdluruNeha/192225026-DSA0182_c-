//C++ Program to Check Whether a character is Vowel or Consonant.

#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter a character :";
	cin>>c;
	if((c>='a' && c<='z')|| (c>="A" && c<="Z"))
	{
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
		cout<<"given character is a vowel";
		else
		cout<<"given character is consonant";
	}
	else
	{
		cout<<"Invalid input";
	}
	return 0;
}
