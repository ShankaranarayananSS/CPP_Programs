#include<iostream>
using namespace std;
int main(){
  int day;
  cout<<"Enter day number:";
  cin>>day;
  
  switch(day){
    case 1:cout<<"SUN";break;
    case 2:cout<<"MON";break;
    case 3:cout<<"TUE";break;
    case 4:cout<<"WED";break;
    case 5:cout<<"THU";break;
    case 6:cout<<"FRI";break;
    case 7:cout<<"SAT";break;
    default:cout<<"No Such Day";break;
  }
  return 0;
}
