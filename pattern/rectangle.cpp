#include<iostream>
using namespace std;
int main(){
int row,col;



cout<<"enter the value of row"<<endl;
cin>>row ;


cout<<"enter the value of col"<<endl;
cin>>col;

for (int i=1; i<=row ; i++){
    
    
    for (int j =1; j<=col; j++){
        cout<<"*";
        
    }
    cout<<endl;
}
return 0;
    
    
}