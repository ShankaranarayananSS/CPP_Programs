//Do While Loop
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
  i=1;
  do{
    cout<<i<<endl;
    i+=2;
  }
  while(i<=n);
  
  //2 4 6 ... N
  cout<<"\nEven Series:"<<endl;
  i=2;
  do{
    cout<<i<<endl;
    i+=2;
  }
  while(i<=n);
  return 0;
}
