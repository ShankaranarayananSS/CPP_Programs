#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter age:";
  cin>>age;
  
  if(age<=0){
    cout<<"Invalid Age!";
  }else if(age>=80){
    cout<<"Old Age";
  }else if(age>=60){
    cout<<"Senior Citizen";
  }else if(age>=40){
    cout<<"Middle Aged";
  }else if(age>=20){
    cout<<"Young Age";
  }else if(age>=13){
    cout<<"Teenager";
  }else{
    cout<<"Child";
  }
  return 0;
}
