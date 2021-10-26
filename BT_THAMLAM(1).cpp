#include <bits/stdc++.h>
using namespace std;
int C[9]={500,200,100,50,20,10,5,2,1};
int S[9];
bool CASHIERS_ALGORITHM(int *C , int m , int n , int *S){
	for(int i =0 ;i<m;i++)
	S[i]=0;
	int i = 0;
	while (n>0 && i<m){
		S[i] = n/C[i] ;
		n-=C[i]*S[i];
		i++;
	}
	if(n>0)	return false;
	else return true;
}
int main(){
	int m = sizeof(C)/sizeof(int);
	int n ;
	cout<<"Nhap so tien :";
	cin>>n;
	if(CASHIERS_ALGORITHM(C,m,n,S))
	{
		cout<<"Result:";
		int min=0;
		for(int i = 0;i<m;i++){
			cout<<"\t"<<C[i]<<"\t"<<S[i]<<endl;
			min+=S[i];
		}
		cout<<"Tong so dong tien it nhat la: "<<min;
	}
	else
		cout<<"Ko Doi DC !!!";
}
