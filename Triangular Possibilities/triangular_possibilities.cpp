#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;
int main(){
	double a,b,c;
	Checkpoint:
	cout<<"a= ";	cin>>a;
	cout<<"b= ";	cin>>b;
	cout<<"c= ";	cin>>c;
	bool x=a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a;
		if(x)
		{
			cout<<"Such a triangle doesn't exist."<<endl;
			goto Checkpoint;
		}
		if(a==b&&b==c)
		{
			cout<<"The triangle you have conjured is ravnostranen"<<endl;
		}
		 if(a==b||b==c||a==c)
		{
			cout<<"The triangle you have come up with is ravnobedren"<<endl;
		}
		else
		{
			cout<<"The triangle you're imaging is raznostranen"<<endl;
		}



}
