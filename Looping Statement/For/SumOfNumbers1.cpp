//Sum of N Numbers

#include<iostream>
using namespace std;
int main(){
  int i,n,add=0;
  cout<<"Enter number:";
  cin>>n;
  
  for(i=1;i<=n;i++){
    add = add + i;
  }
  cout<<"Sum of N numbers = "<<add;
  return 0;
}
