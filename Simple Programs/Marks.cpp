#include<iostream>
using namespace std;

int main(){
	float m1,m2,m3,m4,m5,total,avg;
	cout<<"Enter mark-1:";
	cin>>m1;
	cout<<"Enter mark-2:";
	cin>>m2;
	cout<<"Enter mark-3:";
	cin>>m3;
	cout<<"Enter mark-4:";
	cin>>m4;
	cout<<"Enter mark-5:";
	cin>>m5;
	total = m1+m2+m3+m4+m5;
	avg = total/5;
	cout<<"\nTotal Marks: "<<total;
	cout<<"\nAverage Marks: "<<avg;
}
