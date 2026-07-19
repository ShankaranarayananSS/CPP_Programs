//Vote Eligibility - Version 1

#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter age:";
  cin>>age;
  
  (age>=18)?cout<<"Eligible":cout<<"Not eligible";
  return 0;
}
