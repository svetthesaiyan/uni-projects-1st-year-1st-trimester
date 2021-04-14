#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double length, width; int area_of_the_wall, buckets;
	cout << "length: "; cin >> length;
	cout << "width: "; cin >> width;

	area_of_the_wall=length*width;	//формула за лице
	buckets = (area_of_the_wall / 35);	//формула за необходими кофи боя
	cout << "Area of the wall= " << area_of_the_wall << endl;

	if (area_of_the_wall % 35 == 0)	//1ви подслучай, където кофите са точни
	{
		cout << "You need this many buckets of paint: " << buckets << endl;
	}
	else	//2ри подслучай, където сме с 1 кофа отгоре, тей като не е точно числото
		cout << "You need this many buckets of paint: " << buckets + 1 << endl;

	return 0;
	system("pause=0");
}
