//For Loop
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
  for(i=1;i<=n;i++){
    cout<<i<<endl;
  }
  
  //N to 1
  cout<<"Descending Order:"<<endl;
  for(i=n;i>=1;i--){
    cout<<i<<endl;
  }
}
