#include<iostream>
#include<conio.h>
using namespace std;

void incrementCount(int count)
{
  count=count+1;
}
int main()
{
  int count=0;
  cout<<"\nValue of count before passing the value to function";
  cout<<"\nCount:"<<count;
  incrementCount(count);  // passing value to function
  cout<<"\nValue of count after passing the value to function";
  cout<<"\nCount:"<<count;
  getch();
  return 0;
}