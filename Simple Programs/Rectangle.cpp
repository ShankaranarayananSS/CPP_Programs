//Area of Square       = L * B
//Perimeter of Square  = 2 * (L + B)

#include<iostream>
using namespace std;
int main(){
  int l,b;
  cout<<"Enter length of rectangle:";
  cin>>l;
  cout<<"Enter breadth of rectangle:";
  cin>>b;
  
  cout<<endl<<"Area of Rectangle = "<<(l*b);
  cout<<endl<<"Perimeter of Rectangle = "<<(2*(l+b));
  return 0;
}
