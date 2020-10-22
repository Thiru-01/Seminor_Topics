#include <iostream>
#include <conio.h>

using namespace std;

int Add(int x, int y=20, int z=30)
	{
		return x + y + z;
	}

	int main()
	{

		int rs;
		rs = Add(1);
		cout<<"\nThe sum is : "<<rs;
		rs = Add(2,3);
		cout<<"\nThe sum is : "<<rs;
		rs = Add(4,5,6);
		cout<<"\nThe sum is : "<<rs;
        getch();
        return 0;
	}