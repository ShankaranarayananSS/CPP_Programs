//While Loop
//Multiplication Tables

#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"Enter number:";
	cin>>num;
	cout<<num<<" Tables:";
	while(i<=10){
		cout<<endl<<num<<" * "<<i<<" = "<<num*i;
		i++;
	}
}
