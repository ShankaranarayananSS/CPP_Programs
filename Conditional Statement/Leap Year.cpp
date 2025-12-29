#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter any year:";
	cin>>year;
	if(year%2==0){
		cout<<year<<" is Leap year!";
	}
	else{
		cout<<year<<" is not Leap year!";
	}
}
