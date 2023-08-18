#include<iostream>
using namespace std;
int main()
{
	int value,sum;
	cout<<"enter the value\n";
	cin>>value;
	for(int i=1; i<=value; i++){
		
	sum=sum+i;
	
	}
	cout<<"the sum 1 to"<<value<<"="<<sum;
	return 0;
}
//intial value of i is 1 then it will check the condition
//if it will true then it will print the value else goes out side the loop
  //now i will become 2 by i++ and then again it will check the condition
  //no need of i=i+1 like while loop because i++ have the  same meaning
