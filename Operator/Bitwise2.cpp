#include<iostream>
using namespace std;
int main(){
  int num,shift;
  cout<<"Enter integer value:";
  cin>>num;
  cout<<"Enter no. of shift:";
  cin>>shift;
  
  cout<<"Bit L Shift = "<<(num<<shift)<<endl;
  cout<<"Bit R Shift = "<<(num>>shift)<<endl;
  return 0;
}
