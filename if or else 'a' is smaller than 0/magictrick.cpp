#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a;
	cout<<"a= ";	cin>>a;
	if(a>0)
	{
		cout<<"4isloto e poloxitelno"<<endl;
			a +=3;
		cout<<"Novo a= "<<a<<endl;
	}
	else
	{
		cout<<"4isloto e otricatelno"<<endl;
			a +=2;
		cout<<"Novo a= "<<a<<endl;
	}
}
