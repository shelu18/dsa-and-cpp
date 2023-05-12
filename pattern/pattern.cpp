#include<iostream>
using namespace std; 
int main (){
	
	int row,col; 
	cout<<"enter the value of r";
	cin>>row ;
	
	for (int i=1; i<=row ;i++){
		
		
		for (int j=i; j<=row; j++){
			cout<<"*";
			
		}
		cout<<endl;
	}
	
	
	
	
}
