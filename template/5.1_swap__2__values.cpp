//5.1 swapping two values using template..

#include<iostream>
using namespace std;
template<class s>
void swapping(s a,s b)
{
	s temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n\n\t after swapping.......";
	cout<<"\n\n\t n1 = "<<a<<"\n\n\t n2 = "<<b;
	
}
main()
{
	int n1,n2;
	cout<<"\n\n\t enter the number 1 : ";
	cin>>n1;
	cout<<"\n\n\t enter the number 2 : ";
	cin>>n2;
	cout<<"\n\n\t before swapping.......";
	cout<<"\n\n\t n1 = "<<n1<<"\n\n\t n2 = "<<n2;
	swapping(n1,n2); 
}
