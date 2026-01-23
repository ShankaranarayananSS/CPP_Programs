//Temperature Conversion
//Degree Celsius to Fahrenheit
//F = (C*9/5) + 32

#include<iostream>
using namespace std;
int main(){
  float c;
  cout<<"Enter Celsius:";
  cin>>c;
  printf("Fahrenheit = %.2f",(c*9/5)+32);
}
