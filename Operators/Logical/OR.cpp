#include<iostream>
using namespace std;
int main(){
  int f=0,t=1;
  cout<<"Logical OR";
  cout<<endl<<f<<" || "<<f<<" = "<<(f||f);
  cout<<endl<<f<<" || "<<t<<" = "<<(f||t);
  cout<<endl<<t<<" || "<<f<<" = "<<(t||f);
  cout<<endl<<t<<" || "<<t<<" = "<<(t||t);
  return 0;
}
