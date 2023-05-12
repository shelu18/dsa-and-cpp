#include<iostream>
using namespace std;
int add(int a, int b){
	
int 	c=a+b;
	return c;
}
int main (){
	 int a ,b,ans ;
	 cout<<"enter the value of a and b ";
	 cin >>a>>b;
	 ans = add (a,b);
	 cout<<"the sum of two number is "<<ans;
	return 0;
	
	
	
	
}
