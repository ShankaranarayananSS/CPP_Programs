//	Perimeter of Rectangle	: 2 * (Length + Breadth)
//	Area of Rectangle		: Length * Breadth

#include<iostream>
using namespace std;
int main(){
	float l,b;
	cout<<"Enter Length of Rectangle:";
	cin>>l;
	cout<<"Enter Breadth of Rectangle:";
	cin>>b;
	cout<<"\nPerimeter of Rectangle: "<<2*(l+b);
	cout<<"\nArea of Rectangle:"<<l*b;
}
