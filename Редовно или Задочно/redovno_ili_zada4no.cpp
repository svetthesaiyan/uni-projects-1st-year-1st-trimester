#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,f,g,h;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
	cout<<"d="; cin>>d;
	cout<<"e="; cin>>e;
	cout<<"f="; cin>>f;
	cout<<"g="; cin>>g;
	cout<<"h="; cin>>h;

	if(e==1)
	{
		cout<<"Редовна форма на обучение."<<endl;
	}
	else if(e==2)
	{
		cout<<"Задочна форма на обучение."<<endl;
	}
	else
	{
		cout<<"Невалиден факултетен номер!"<<endl;
	}
	return 0;
}
