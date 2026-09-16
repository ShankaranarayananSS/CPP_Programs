//Factorial of N Number

#include<iostream>
using namespace std;
int main(){
  int n,i=1,fact=1;
  cout<<"Enter number:";
  cin>>n;
  
  do{
    fact = fact * i;
    i++;
  }
  while(i<=n);
  cout<<"Factorial of "<<n<<" is "<<fact;
  return 0;
}
