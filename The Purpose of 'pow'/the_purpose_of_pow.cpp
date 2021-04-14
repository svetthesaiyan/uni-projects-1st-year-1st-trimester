#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	int a,b,y;
	ss:
	cout<<"a= ";	cin>>a;
	cout<<"b= ";	cin>>b;
	y=pow(a,2)+pow(b,3);
	if(a>0&&b>0)
		cout<<"y= "<<y<<endl;
	else
		cout<<"Mistake"<<endl;
	goto ss;
}
