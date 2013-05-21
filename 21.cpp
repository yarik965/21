// 123.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  int x=10,y=1,a=3,b=3,g=5,Y=1,i=2,j=9;
	
	{
		if ((x<5)&&(y>=7))//==((x<5)||(y>=7))
			cout<<"1";
	}
	{
		if ((x<5)||(y>=7))
			cout<<"2";
	}

	return 0;
}
