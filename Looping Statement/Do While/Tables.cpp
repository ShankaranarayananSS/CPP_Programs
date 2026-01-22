//Do While Loop
//Multiplication Tables

#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"Enter number:";
	cin>>num;
	cout<<num<<" Tables:";
	do{
		cout<<endl<<num<<" * "<<i<<" = "<<num*i;
		i++;
	}
	while(i<=10);
}
