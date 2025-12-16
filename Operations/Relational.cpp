#include<iostream>
using namespace std;
int main(){
	
	float n1,n2;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	
	cout<<"\n"<<n1<<" < "<<n2<<":"<<(n1<n2);
	cout<<"\n"<<n1<<" > "<<n2<<":"<<(n1>n2);
	cout<<"\n"<<n1<<" <= "<<n2<<":"<<(n1<=n2);
	cout<<"\n"<<n1<<" >= "<<n2<<":"<<(n1>=n2);
	cout<<"\n"<<n1<<" == "<<n2<<":"<<(n1==n2);
	cout<<"\n"<<n1<<" != "<<n2<<":"<<(n1!=n2);
}
