#include <bits/stdc++.h>
using namespace std;
int *a;
int DQ(int n){
	if(n==1 || n == 2) 
		a[n] = 1;
	else if(a[n]<0)
	{
		a[n] = DQ(n-1) + DQ(n-2);
	}
	return a[n];
}

int main(){
	int n;
	long s =0;
	cout<<"Nhap N = ";
	cin>>n;
	a = new int [n+1];
	for(int i = 1 ; i <= n ; i++){
		a[i] = -1;
	}
	DQ(n);
	cout<<"Day SO: ";
	for(int i = 1 ;i<=n; i++){
		cout<<a[i] <<" ";
		s+=a[i];
	}
	cout<<"\nTong :"<< n <<"So Fibo la :"<<s;
}
