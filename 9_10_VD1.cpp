#include <bits/stdc++.h>
using namespace std;
int n;
int a[10];

void show(){
	for(int i = 1 ; i <=n ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void TRY(int k){
	for(int i = 0 ; i <= 1 ; i++ ){
		a[k] = i;
		if( k == n){
			show();
		}
		else{
			TRY(k+1);
		}
	}
}

int main(){
	cout<<"Nhap N = ";
	cin>>n;
	TRY(1);
}
