//Sum of N Even Numbers

#include<iostream>
using namespace std;
int main(){
  int i,n,add=0;
  cout<<"Enter number:";
  cin>>n;
  
  for(i=2;i<=n;i+=2){
    add = add + i;
  }
  cout<<"Sum of N Even numbers = "<<add;
  return 0;
}
