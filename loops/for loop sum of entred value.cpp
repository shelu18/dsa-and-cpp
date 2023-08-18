#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int i=1;
    int value=10;
    cout<<"enter the value\n";
    cin>>value;
    while(i<=value)
    {
    sum=sum+i;
    i=i+1;
    
    }
    cout<<"the sum of the entered value is\n"<<sum;
    
}



