//Sum of N Odd Numbers

#include<iostream>
using namespace std;
int main(){
  int i=1,n,add=0;
  cout<<"Enter number:";
  cin>>n;
  
  while(i<=n){
    add = add + i;
    i = i + 2;
  }
  cout<<"Sum of N Odd numbers = "<<add;
  return 0;
}
