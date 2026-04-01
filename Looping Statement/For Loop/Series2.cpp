//For Loop
//Program to print 1 3 5 ... N
//Program to print 2 4 6 ... N

#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter any number:";
  cin>>n;
  
  //1 3 5 ... N
  cout<<"\nOdd Series:"<<endl;
  for(i=1;i<=n;i+=2){
    cout<<i<<endl;
  }
  
  //2 4 6 ... N
  cout<<"\nEven Series:"<<endl;
  for(i=2;i<=n;i+=2){
    cout<<i<<endl;
  }
  return 0;
}
