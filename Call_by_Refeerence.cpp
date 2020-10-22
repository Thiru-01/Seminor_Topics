#include<iostream>
#include<conio.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 100, b = 200;
    cout<<"\nValue of A and B before passing value";
    cout<<"\nValue of a:"<<a;
    cout<<"\nValue of b:"<<b;
    swap(a, b);  // passing value to function
    cout<<"\nValue of A and B after passing value";
    cout<<"\nValue of a:"<<a;
    cout<<"\nValue of b:"<<b;
    getch();
    return 0;
}
