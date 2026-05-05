#include<iostream>
using namespace std;
int main(){
  int t=1,f=0;
  cout<<"AND OPERATOR"<<endl;
  cout<<f<<" && "<<f<<" : "<<(f&&f)<<endl;
  cout<<f<<" && "<<t<<" : "<<(f&&t)<<endl;
  cout<<t<<" && "<<f<<" : "<<(t&&f)<<endl;
  cout<<t<<" && "<<t<<" : "<<(t&&t)<<endl;
  
  cout<<"\nOR OPERATOR"<<endl;
  cout<<f<<" || "<<f<<" : "<<(f||f)<<endl;
  cout<<f<<" || "<<t<<" : "<<(f||t)<<endl;
  cout<<t<<" || "<<f<<" : "<<(t||f)<<endl;
  cout<<t<<" || "<<t<<" : "<<(t||t)<<endl;
  
  cout<<"\nNOT OPERATOR"<<endl;
  cout<<"!"<<f<<" : "<<(!f)<<endl;
  cout<<"!"<<t<<" : "<<(!t)<<endl;
  return 0;
}
