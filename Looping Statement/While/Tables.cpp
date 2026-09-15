#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cout<<"Enter number:";
  cin>>n;
  
  cout<<n<<" Tables:";
  while(i<=10){
    cout<<endl<<n<<" * "<<i++<<" = "<<i*n;
  }
  return 0;
}
