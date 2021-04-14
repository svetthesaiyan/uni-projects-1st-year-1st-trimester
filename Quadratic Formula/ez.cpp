#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,D,x1,x2;
	cout<<"a= ";			cin>>a;
	cout<<"b= ";			cin>>b;
	cout<<"c= ";			cin>>c;
	D=(b*b)-(4*a*c);

	if(D>0)
	{
		x1 = (b*(-1) + sqrt(D))/(2*a);
		x2 = (b*(-1) - sqrt(D))/(2*a);
		cout<<"x1= "<<x1<<endl<<"x2= "<<x2<<endl;
	}
	if(D==0)
	{
		x1=(-b)/(2*a);
		cout<<"x1=x2= "<<x1;
	}
	if(D<0)
		cout<<"The equation doesn't have a final result.";

	return 0;
}
