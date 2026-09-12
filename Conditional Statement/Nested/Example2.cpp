#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter age:";
  cin>>age;
  
  if(age>=18 && age<=60){
    cout<<"Eligible to drive";
  }else{
    if(age<18){
      cout<<"Under age";
    }else{
      cout<<"Over age";
    }
  }
  return 0;
}
