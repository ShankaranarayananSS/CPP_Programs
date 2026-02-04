//Temperature Conversion
//Kelvin to Fahrenheit
//F = (K-273.15) * 9/5 + 32

#include<iostream>
using namespace std;

int main(){
  float k;
  cout<<"Enter Kelvin:";
  cin>>k;
  printf("Fahrenheit = %.2f",(k-273.15)*9/5+32);
}
