#include<iostream>
using namespace std;
int main(){
  int month;
  cout<<"Enter month number:";
  cin>>month;
  
  switch(month){
    case 1:cout<<"JAN";break;
    case 2:cout<<"FEB";break;
    case 3:cout<<"MAR";break;
    case 4:cout<<"APR";break;
    case 5:cout<<"MAY";break;
    case 6:cout<<"JUN";break;
    case 7:cout<<"JUL";break;
    case 8:cout<<"AUG";break;
    case 9:cout<<"SEP";break;
    case 10:cout<<"OCT";break;
    case 11:cout<<"NOV";break;
    case 12:cout<<"DEC";break;
    default:cout<<"No Such Month";break;
  }
  return 0;
}
