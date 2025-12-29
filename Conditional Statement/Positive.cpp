#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter any number:";
	cin>>num;
	if(num>0){
		cout<<num<<" is Positive number!";
	}
	else if(num<0){
		cout<<num<<" is Negative number!";
	}
	else{
		cout<<num<<" is Either Positive or Negative!";
	}
}
