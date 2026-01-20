//Temperature Conversion
//Fahrenheit to Degree Celsius
//C = (F-32) * 5/9

#include<iostream>
using namespace std;
int main(){
  float f,c;
  cout<<"Enter Fahrenheit:";
  cin>>f;
  printf("Celsius = %.2f",(f-32)*5/9);
}
