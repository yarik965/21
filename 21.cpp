#include <iostream>
using namespace std;

int main()
{
	int x=10,y=1,a=3,b=3,g=5,Y=1,i=2,j=9;
	
	{
		if (!(x<5)&&!(y>=7))
			cout<<"1";
	}
	{
		if (!((x<5)||(y>=7)))
			cout<<"2"<<endl;
	}
	{
		if (!(a==b)||!(g!=5))
			cout<<"3";
	}
	{
		if (!((a==b)&&!(g!=5)))
			cout<<"4"<<endl;
	}
	{
		if (!((x<=8)&&(Y>4)))
			cout<<"5";
	}
	{
		if (!((x<=8)||(Y>4)))
			cout<<"6"<<endl;
	}
	{
		if (!((i>4)&&(j<=6)))
			cout<<"7";
	}
	{
		if (!((i>4)&&(j<=6)))
			cout<<"8"<<endl;
	}
	return 0;
}
