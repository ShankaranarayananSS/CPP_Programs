//Vote Eligibility - Version 2

#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter age:";
  cin>>age;
  if(age<18){
    cout<<"Not eligible";
  }else{
    cout<<"Eligible";
  }
  return 0;
}
