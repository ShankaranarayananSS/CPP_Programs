#include<iostream>
using namespace std;
int main(){
  int num,i;
  cout<<"Enter number:";
  cin>>num;
  
  cout<<num<<" Tables:";
  for(i=1;i<=10;i++){
    cout<<endl<<num<<" * "<<i<<" = "<<num*i;
  }
  return 0;
}
