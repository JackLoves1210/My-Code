#include <bits/stdc++.h>
using namespace std;
int *C,SoChai = 0;
void Sort(int *C, int m){
	for(int i = 0 ;i <m-1 ;i++)
	{
		for(int j = i+1 ; j<m;j++){
			if(C[i]<C[j])
			{
				int tg = C[i];
					C[i] = C[j];
					C[j] = tg;
			}
		}
	}
}
bool Count_Bottle(int *C , int m , int n){
	int i = 0;
	while (n>=C[i] && i<m){
		SoChai++;
		n-=C[i];
		i++;
	}
	if(SoChai>0) return true;
	else return false;
}
int main(){
	
	int n ;
	cout<<"Nhap so luong nuoc :";
	cin>>n;
	int m ;
	cout<<"Nhap So Chai Nuoc:"; cin>>m;
	cout<<"Nhap Lan Luot Dung Tich Chai Nuoc:";
	C = new int [m];
	for(int i = 0 ;i<m; i++){
		cin>>C[i];
	}
	if(Count_Bottle(C,m,n))
	{
		cout<<"Tong so chai nhieu nhat do day la : "<<SoChai;
	}
	else
		cout<<"Ko Doi DC !!!";
	
	delete C;
	return 0;
}
