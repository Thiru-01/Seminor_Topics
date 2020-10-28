#include <iostream> 
#include <conio.h>
using namespace std; 

inline int cube(int s) 
    { 
        return s*s*s; 
    }

int square(int a) 
    { 
        return a*a; 
    }

int main() 

    { 
        int a = 2;
        cout << "\nThe cube of 3 is: " << cube(3); //s*s*s*;
        cout << "\nThe square of 2 is: " << square(a);
        getch();
        return 0; 
    }  
