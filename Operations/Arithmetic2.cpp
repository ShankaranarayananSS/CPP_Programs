#include<iostream>
using namespace std;
int main(){
  int n1,n2,mod;
  cout<<"Enter number-1:";
  cin>>n1;
  cout<<"Enter number-2:";
  cin>>n2;
  
  mod = n1%n2;
  cout<<n1<<" % "<<n2<<" = "<<mod<<endl;
  return 0;
}
