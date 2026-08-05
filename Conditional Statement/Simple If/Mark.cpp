#include<iostream>
using namespace std;
int main(){
  int mark;
  cout<<"Enter mark:";
  cin>>mark;
  
  cout<<"Mark = "<<mark;
  if(mark>=90 && mark<=100){
    cout<<endl<<"Excellent!";
  }
  return 0;
}
