#include<iostream>
using namespace std;
int main(){
  int num,shift;
  cout<<"Enter integer value:";
  cin>>num;
  cout<<"Enter no. of shift:";
  cin>>shift;
  
  cout<<endl<<"Bit L Shift = "<<(num<<shift);
  cout<<endl<<"Bit R Shift = "<<(num>>shift);
  return 0;
}
