#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cout<<"Enter number:";
  cin>>n;
  
  cout<<n<<" Tables:";
  do{
    cout<<endl<<n<<" * "<<i++<<" = "<<i*n;
  }
  while(i<=10);
  return 0;
}
