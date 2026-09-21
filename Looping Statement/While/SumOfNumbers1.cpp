//Sum of N Numbers

#include<iostream>
using namespace std;
int main(){
  int i=1,n,add=0;
  cout<<"Enter number:";
  cin>>n;
  
  while(i<=n){
    add = add + i;
    i++;
  }
  cout<<"Sum of N numbers = "<<add;
  return 0;
}
