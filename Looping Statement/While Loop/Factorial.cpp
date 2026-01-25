//While Loop
//Factorial

#include<iostream>
using namespace std;
int main(){
  int num,i=1,fact=1;
  cout<<"Enter any number:";
  cin>>num;
  while(i<=num){
    fact = fact*i;
    i++;
  }
  cout<<"Factorial of "<<num<<" is "<<fact;	
}
