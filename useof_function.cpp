

#include <iostream>

using namespace std;
int add(int a , int b){
    int sum= a+b;
    return sum;
    
    
}
int main (){
    int a,b;
    cin>>a>>b;
    cout<<"the addition of the number is "<<add(a,b)<<endl;
    cout<<"enter any another twoo numbers"<<endl;
    int x, y;
    cin>>x>>y;
    cout<<"the addition of  another two number is "<<add(x,y);

   

    return 0;
}
