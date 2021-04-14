#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"a= ";	cin>>a;
	cout<<"b= ";	cin>>b;
	cout<<"c= ";	cin>>c;
	cout<<"d= ";	cin>>d;

	if(a>b&&a>c&&a>d)
		cout<<"a is MAX"<<endl;
	else if(b>a&&b>c&&b>d)
		cout<<"b is MAX"<<endl;
	else if(c>a&&c>b&&c>d)
		cout<<"c is MAX"<<endl;
	else
		cout<<"d is MAX"<<endl;
}
