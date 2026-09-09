#include<iostream>
using namespace std;
int main(){
  int i,n;
  cout<<"Enter number:";
  cin>>n;
  
  cout<<n<<" Tables:";
  for(i=1;i<=10;i++){
    cout<<endl<<n<<" x "<<i<<" = "<<i*n;
  }
  return 0;
}
