#include<iostream>
using namespace std;
int main(){
  int t=1, f=0;
  cout<<"Truth Tables:"<<endl;
  
  cout<<"\nAND OPERATOR:"<<endl;
  cout<<t<<" && "<<t<<" = "<<(t&&t)<<endl;
  cout<<t<<" && "<<f<<" = "<<(t&&f)<<endl;
  cout<<f<<" && "<<t<<" = "<<(f&&t)<<endl;
  cout<<f<<" && "<<f<<" = "<<(f&&f)<<endl;
  
  cout<<"\nOR OPERATOR:"<<endl;
  cout<<t<<" || "<<t<<" = "<<(t||t)<<endl;
  cout<<t<<" || "<<f<<" = "<<(t||f)<<endl;
  cout<<f<<" || "<<t<<" = "<<(f||t)<<endl;
  cout<<f<<" || "<<f<<" = "<<(f||f)<<endl;
  
  cout<<"\nNOT OPERATOR:"<<endl;
  cout<<"!"<<t<<" = "<<(!t)<<endl;
  cout<<"!"<<f<<" = "<<(!f)<<endl;
  return 0;
}
