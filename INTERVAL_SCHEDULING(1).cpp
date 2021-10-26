#include <bits/stdc++.h>
using namespace std;
float *S , *F ;
int *SCHE;
void sorting(float *S , float *F , int n){
	for(int i = 0 ;i <n-1 ;i++)
	{
		for(int j = i+1 ; j<n;j++){
			if(F[i]>F[j])
			{
				swap(F[i],F[j]);
				swap(S[i],S[j]);
			}
		}
	}
}
int  *INTERVAL_SCHEDULING(float *S , float *F,int n){
	int *SCHE = new int[n]{0};
	float last_finish = 0;
	for(int i = 1 ; i <= n ;i++)
	{
		if(S[i-1]>=last_finish){
			SCHE[i-1] = i;
			last_finish = F[i-1];
		}
	}
	return SCHE;
}
int main(){
	int n ;
	cout<<"Nhap so luong tg bieu:";
	cin>>n;
	S = new float [n];
	F = new float [n];
	SCHE = new int [n];
	cout<<"Nhap Lich Bat Dau : ";
	for(int i = 0; i<n ;i++){
		cin>>S[i];
	}
	cout<<"Nhap Lich Ket Thuc : ";
	for(int i = 0; i<n ;i++){
		cin>>F[i];
	}
	sorting(S,F,n);
	cout<<"Lich Bat Dau : ";
	for(int i = 0; i<n ;i++){
		cout<<S[i]<<" ";
	}
	cout<<"\nLich Ket Thuc : ";
	for(int i = 0; i<n ;i++){
		cout<<F[i]<<" ";
	}
	int *SCHE = INTERVAL_SCHEDULING(S,F,n);
	cout<<"\nLich lam Viec Toi Uu la:";
	for(int i = 0 ;i<n;i++){
		if(SCHE[i]>0){
			cout<<SCHE[i]<<"\t";
		}
	}
	return 0;
}
