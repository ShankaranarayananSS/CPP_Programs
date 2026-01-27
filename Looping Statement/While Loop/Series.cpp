//While Loop
//Program to print 1 2 ... N
//Program to print N (N-1) ... 1

#include<iostream>
using namespace std;
int main(){
  int n,i;
  
  cout<<"Enter any number:";
  cin>>n;
  
  //1 to N
  cout<<"Ascending Order:"<<endl;
  i=1;
  while(i<=n){
    cout<<i<<endl;
    i++;
  }
  
  //N to 1
  cout<<"Descending Order:"<<endl;
  i=n;
  while(i>=1){
    cout<<i<<endl;
    i--;
  }
}
