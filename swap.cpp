#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"The swapped numbers are: "<<a<<" "<<b<<"\n";
return 0;
}