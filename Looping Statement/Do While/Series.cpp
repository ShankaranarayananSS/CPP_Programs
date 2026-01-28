//Do While Loop
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
  do{
    cout<<i<<endl;
    i++;
  }
  while(i<=n);
  
  //N to 1
  cout<<"Descending Order:"<<endl;
  i=n;
  do{
    cout<<i<<endl;
    i--;
  }
  while(i>=1);
}
