//Temperature Conversion
//Kelvin to Degree Celsius
//C = K - 273.15

#include<iostream>
using namespace std;
int main(){
  float k;
  cout<<"Enter Kelvin:";
  cin>>k;
  printf("Celsius = %.2f",k-273.15);
}
