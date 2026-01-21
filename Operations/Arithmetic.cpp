#include<iostream>
using namespace std;
int main(){
	
	float n1,n2;
	cout<<"Enter number-1:";
	cin>>n1;
	cout<<"Enter number-2:";
	cin>>n2;
	
	cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
	cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
	cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
	cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
	
	int num1 = n1;
	int num2 = n2;
	int mod = num1%num2;
	cout<<n1<<" % "<<n2<<" = "<<mod<<endl;
}
