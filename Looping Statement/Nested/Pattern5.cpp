/*
EXPECTED PATTERN
1
2  3
4  5  6
*/

#include<iostream>
using namespace std;
int main(){
  int i,j,k=1;
  for(i=1;i<=3;i++){
    for(j=1;j<=i;j++){
      cout<<k<<"\t";
      k++;
    }
    cout<<endl;
  }
  return 0;
}
