#include<iostream>
using namespace std;
int main(){
  int n1,n2;
  cout<<"Enter number-1:";
  cin>>n1;
  cout<<"Enter number-2:";
  cin>>n2;
  
  if(n1>n2){
    cout<<n1<<" is bigger than "<<n2;
  }else if(n1<n2){
    cout<<n2<<" is bigger than "<<n1;
  }else{
    cout<<"Both are same";
  }
  return 0;
}
