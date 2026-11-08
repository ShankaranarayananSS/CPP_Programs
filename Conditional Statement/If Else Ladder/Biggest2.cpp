#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter number-1:";
  cin>>a;
  cout<<"Enter number-2:";
  cin>>b;
  cout<<"Enter number-3:";
  cin>>c;
  
  if(a==b && b==c){
    cout<<"All three are same";
  }else if(a>=b && a>=c){
    cout<<a<<" is bigger than "<<b<<" and "<<c;
  }else if(b>=a && b>=c){
    cout<<b<<" is bigger than "<<a<<" and "<<c;
  }else{
    cout<<c<<" is bigger than "<<a<<" and "<<b;
  }
  return 0;
}
