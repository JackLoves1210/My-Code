#include <bits/stdc++.h>
using namespace std;
//cau truc du lieu 
// So dinh n = 9
int n = 9;
// Ma hoa Dinh  A = 0 , B = 1 ,.... , I  = n - 1(8)
// Dinh Xuat Phat
int u = 0;
// Dinh Ket Thuc
int v = 1;
// Danh dau dinh da di 
bool go[9] = {false} ;
// Duong di ngan nhat 
int p[9], m = 0;
// Do Thi
int c[9][9] = {
	{-1,-1,16,10,19,-1,-1,-1,-1},
	{-1,-1,-1,-1,-1,3,8,12,5},
	{16,-1,-1,18,-1,-1,-1,20,-1},
	{10,-1,18,-1,7,7,8,-1,-1},
	{19,-1,-1,7,-1,-1,-1,-1,9},
	{-1,3,-1,7,-1,-1,2,15,-1},
	{-1,8,-1,8,-1,2,-1,-1,4},
	{-1,12,20,-1,-1,15,-1,-1,-1},
	{-1,5,-1,-1,9,-1,4,-1,-1}
};
//Tong chi phi duong di ngan nhat tim duoc
int cost = 0;
bool greedy_travel_sale_man(){
	p[m] = u; // tap muc tieu chua dinh xuat phat
	go[u] = true; // dinh u da tham
	while (u!= v){// Chua toi dinh ket thuc
		//tim dinh ke voi u chua tham , co chi phi tu u di sang dat min 
		//1. Tim dinh ke dau tien
		int w = 0;
		while(w < n && (go[w]==true || c[u][w] == -1)){
			w++;
		}
		//2. kiem tra xem co dinh ke ko
		if(w == n){// khong tim dc dinh ke nao -> ko tim dc duong di
			return false;
		}
		else{//co dinh ke
			u = w;//di tham sang dinh w
			w++;
			while (w<n){
				if(go[w] == false && c[p[m]][w] != -1 && c[p[m]][w] < c[p[m]][u])
				{
					u = w;
				}
				w++;
			}
			cost += c[p[m]][u];
			m++;
			p[m] = u;
			go[u] = true;
		}
	}
	return true;
}
int main(){
	if(greedy_travel_sale_man()==true){
		cout<<"Tim Duoc duong di: ";
		for(int i = 0 ; i<=m ; i++)
		{
			cout<<(char)(p[i]+65)<<" ";
		}
		cout<<"\nVoi Tong Chi Phi: "<<cost;
	}
	else{
		cout<<"Khong Tim Duoc Duong Di";
	}
}
