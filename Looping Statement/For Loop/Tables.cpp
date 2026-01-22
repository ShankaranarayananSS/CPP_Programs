//For Loop
//Multiplication Tables

#include<iostream>
using namespace std;
int main(){
	int i,num;
	cout<<"Enter number:";
	cin>>num;
	cout<<num<<" Tables:";
	for(i=1;i<=10;i++){
		cout<<endl<<num<<" * "<<i<<" = "<<num*i;
	}
}
