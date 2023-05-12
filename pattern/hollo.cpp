/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   // cout<<"Hello World";
int row,col;


cout <<"enter the value of r";
cin>>row;


cout<<"enter the value of c";
cin>>col;



for(int i=1;i<=row; i++){
    for (int j=1; j<=col; j++){
        if (i==1||j==1||i==row||j==col){
          cout<<"*";  
        }  
         else
         cout<<" " ;                           //kiuki apan ko yeh dekhna he ki star he kahan kahan per 
    }  
                                             // ek to 1 1 ki jagah per he or ek to last ki value per he 
   cout<<endl;                                   //matlab row ki last or collumn ki jo last value he wahan per star he bus 
}
    return 0;
}