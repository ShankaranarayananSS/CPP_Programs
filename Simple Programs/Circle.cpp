//Area of Circle          = 3.14 * R * R
//Circumference of Circle = 2 * 3.14 * R

#include<iostream>
using namespace std;
int main(){
  float r;
  cout<<"Enter radius of circle:";
  cin>>r;
  
  cout<<endl<<"Area of Circle = "<<(3.14*r*r);
  cout<<endl<<"Circumference of Circle = "<<(2*3.14*r);
  return 0;
}
