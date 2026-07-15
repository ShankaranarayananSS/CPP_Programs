#include<iostream>
using namespace std;
int main(){
  int value,shift;
  cout<<"Enter integer value:";
  cin>>value;
  cout<<"Enter shift amount:";
  cin>>shift;
  
  cout<<endl<<value<<"<<"<<shift<<" = "<<(value<<shift);
  cout<<endl<<value<<">>"<<shift<<" = "<<(value>>shift);
  return 0;
}
