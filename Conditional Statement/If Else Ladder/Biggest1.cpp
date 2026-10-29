//Biggest Of Two Numbers

#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter number-1:";
  cin>>a;
  cout<<"Enter number-2:";
  cin>>b;
  
  if(a>b){
    cout<<a<<" is bigger than "<<b;
  }else if(a<b){
    cout<<b<<" is bigger than "<<a;
  }else{
    cout<<"Both are same";
  }
  return 0;
}
