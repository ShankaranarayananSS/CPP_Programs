#include<iostream>
using namespace std;
int main(){
  float p;
  cout<<"Enter your percentage:";
  cin>>p;
  if(p>=80 && p<=100){
    cout<<"First class with distinction!";
  }
  else if(p>=60 && p<80){
    cout<<"First class";
  }
  else if(p>=40 && p<60){
    cout<<"Second class";
  }
  else if(p>=0 && p<40){
    cout<<"Fail!";
  }
  else{
    cout<<"Invalid Input!";
	}
}
