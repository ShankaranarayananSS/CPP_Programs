#include<iostream>
using namespace std;
int main(){
  char letter;
  cout<<"Enter any letter:";
  cin>>letter;
  if(letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U' ||
    letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
    cout<<"\'"<<letter<<"\' is a Vowel!";
  }
  else{
    cout<<"\'"<<letter<<"\' is a Consonant or Other character";
	}
}
