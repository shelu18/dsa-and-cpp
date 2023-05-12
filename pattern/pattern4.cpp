





#include<iostream>
using namespace std; 
int main (){
	
	int row; 
	cout<<"enter the value of r";
	cin>>row ;
	
	for (int i=1; i<=row ;i++){
		
		
		for (int j=1; j<=(row-i); j++){ //here row number is i 
		                              //look at logic
			cout<<" ";
			
		}
		for(int j=1; j<=(2*i-1);j++){
		
		cout<<"*";
	}
		cout<<endl;
	
}
	
}

