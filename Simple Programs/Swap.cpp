#include<iostream>
using namespace std;
int main() {
  int n1,n2,temp;
  
  cout<<"Enter Number 1:";
  cin>>n1;
  cout<<"Enter Number 2:";
  cin>>n2;
  
  cout<<"\n\nNumbers Before Swapping:";
  cout<<"\nNumber 1 = "<<n1<<"\nNumber 2 = "<<n2;
  
  temp = n1;
  n1 = n2;
  n2 = temp;
  
  cout<<"\n\nNumbers After Swapping:";
  cout<<"\nNumber 1 = "<<n1<<"\nNumber 2 = "<<n2;
}
