//Temperature Conversion
//Fahrenheit to Kelvin
//K = (F-32) * 5/9 + 273.15

#include<iostream>
using namespace std;

int main(){
  float f;
  cout<<"Enter Fahrenheit:";
  cin>>f;
  printf("Kelvin = %.2f",(f-32)*5/9+273.15);
}
