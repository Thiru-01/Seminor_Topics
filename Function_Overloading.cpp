 #include <iostream>
 #include <conio.h>
 using namespace std;

void display (int a, int b) 
    {
        cout<< a <<" , "<< b << endl;
    }
void display (int a )
    {
        cout << a << endl;
    }
void display (double a )
    {
        cout << a << endl;
    }
void display(int a, float b)
    {
        cout<< a << " , " << b << endl;
    }

int main()
    {
        
        display(5);
        display(2.3);
        display(5,8);
        //display(5,4.0);
        getch();
        return 0;
    }