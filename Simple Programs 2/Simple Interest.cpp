#include<iostream>
using namespace std;
int main(){
  float p,n,r;
  cout<<"Enter Principle amount:";
  cin>>p;
  cout<<"Enter No. of Years:";
  cin>>n;
  cout<<"Enter Rate of Percentage:";
  cin>>r;
  
  cout<<"Simple Interest = "<<p*n*r/100;
  return 0;
}
