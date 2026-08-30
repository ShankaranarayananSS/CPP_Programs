#include<iostream>
using namespace std;
int main(){
  int mark;
  cout<<"Enter your mark:";
  cin>>mark;
  
  if(mark>=80 && mark<=100){
    cout<<"Distinction";
  }else if(mark>=60 && mark<=79){
    cout<<"First Class";
  }else if(mark>=40 && mark<=59){
    cout<<"Second Class";
  }else if(mark>=0 && mark<=39){
    cout<<"Fail";
  }else{
    cout<<"Invalid mark";
  }
  return 0;
}
