//Do While Loop
//Factorial

#include<iostream>
using namespace std;
int main(){
  int num,i=1,fact=1;
	cout<<"Enter any number:";
  cin>>num;
  do{
    fact = fact*i;
    i++;
  }
  while(i<=num);{
    cout<<"Factorial of "<<num<<" is "<<fact;	
  }
}
