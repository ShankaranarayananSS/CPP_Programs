//Sum of N Numbers

#include<iostream>
using namespace std;
int main(){
  int i=1,n,add=0;
  cout<<"Enter number:";
  cin>>n;
  
  do{
    add = add + i;
    i++;
  }
  while(i<=n);
  cout<<"Sum of N numbers = "<<add;
  return 0;
}
