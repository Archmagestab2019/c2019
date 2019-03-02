#include<iostream>
#include<cstdio>
#include<cmath>

int isprime(int n)
{
	int flag=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	using namespace std;
	int n;
	cin>>n;
	if(n==1){
		cout<<n<<"��������."<<endl;
		return 0; 
	}
	if(isprime(n)){
		cout<<n<<"��������."<<endl;
	}else{
		cout<<n<<"������."<<endl;
	}
	return 0; 
}
