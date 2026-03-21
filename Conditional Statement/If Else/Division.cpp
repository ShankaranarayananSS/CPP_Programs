#include<iostream>
using namespace std;
int main(){
  float n1,n2;
  cout<<"Enter numerator:";
  cin>>n1;
  cout<<"Enter denominator:";
  cin>>n2;
  
  if(n2==0){
    cout<<"Cannot divide by Zero";
  }
  else{
    printf("Division = %.2f",n1/n2);
  }
  return 0;
}
