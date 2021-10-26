#include <bits/stdc++.h>
using namespace std;
int DQ(int n){
	if(n==0){
		return 0;
	}
	else{
		return n%10 + DQ(n/10);
	}
}
void Lap(int n){
	int s = 0;
	while(n>0){
		s+=n%10;
		n=n/10;
	}
	cout<<"\nTong Cac Chu So Nguyen La : "<<s<<" (Dung Lap)";
}
int main(){
	int n;
	cout<<"Nhap N= ";
	cin>>n;
	cout<<"Tong cac chu so nguyen la: "<<DQ(n)<<" (Dung De Quy)";
	Lap(n);
}
