#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	if(num1>num2){
		cout<<num1<<" is bigger than "<<num2;
	}
	else if(num1<num2){
		cout<<num2<<" is bigger than "<<num1;
	}
	else{
		cout<<"Both number are Equal!";
	}
}
