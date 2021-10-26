#include <bits/stdc++.h>
using namespace std;
int a[3] = {1,2,5};
int n = sizeof(a) / sizeof(int);
void chiatien(int x){
	stack<int> st;
	int d1 = 0 ,d2=0 , d3=0;
	for(int i = n-1 ; i>=0; i--){
		while (x >= a[i]){
			x-= a[i];
			st.push(a[i]);
			if(a[i]==5){
				d1++;
			}
			else if(a[i]==2){
				d2++;
			}
			else d3++;
		}
	}
	while (!st.empty()) {
        cout <<" "<< st.top();
        st.pop();
    }
    cout<<"\nSo dong xu la:"<<d1<<" "<<d2<<" "<<d3;
}
int main(){
	int x;
	cout<<"Nhap so tien can chia :";
	cin>>x;
	cout<<"\nSo tien lay dc la: ";
	chiatien(x);
}
