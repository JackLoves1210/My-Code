#include <bits/stdc++.h>
using namespace std;

void Sorting(int a[],int n)
{ 
	for(int i = 0 ; i<n-1 ; i++)
		for(int j = i + 1 ; j<n ; j ++ )
			if(a[j]<a[i])
			{
				int TG = a[i];
					a[i]=a[j];
					a[j]=TG;
			}
}
int TKNP_DQ(int a[],int c , int l , int r)
{
	int M;
	while(l<=r){
		M = (l+r)/2;
		if(a[M] == c)	return M;
		else if (c>a[M])
			return TKNP_DQ(a,c,M+1,r);
		else
			return TKNP_DQ(a,c,l,M-1);
	}
	return -1;
}
int main(){
	int a[10] , n ,c;
	cout<<"Nhap So Luong Phan Tu Mang : ";
	cin>>n;
	cout<<"Nhap Mang: ";
	for(int i = 0 ; i < n ;i++){
		cin>>a[i];
	}
	Sorting(a,n);
	cout<<"\nMang Sau Khi Sap Xep La:";
	for(int i = 0 ; i < n ;i++){
		cout<<a[i]<<"";
	}
	cout<<"\nNhap So Can Tim : "; cin>>c;
		if(TKNP_DQ(a,c,0,n-1)!= -1){
		cout<<"Vi Tri Cua c la :"<<TKNP_DQ(a,c,0,n-1)+1;
	}
	else
		cout<<"Ko tim thay !!!";
	return 0;
}
