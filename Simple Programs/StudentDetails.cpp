#include<iostream>
using namespace std;
int main(){
  int roll;
  char name[10];
  float percent;
  
  cout<<"Enter your name:";
  cin>>name;
  cout<<"Enter roll number:";
  cin>>roll;
  cout<<"Enter your percentage:";
  cin>>percent;
  
  cout<<"\nSTUDENT DETAILS";
  cout<<"\nStudent Name\t:"<<name;
  cout<<"\nRoll No.\t:"<<roll;
  cout<<"\nPercentage\t:"<<percent;
  return 0;
}
