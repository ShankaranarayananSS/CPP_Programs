#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter any year:";
	cin>>year;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		cout<<year<<" is Leap year!";
	}
	else{
		cout<<year<<" is not Leap year!";
	}
}
