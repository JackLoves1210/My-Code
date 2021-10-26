#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int so_mien = 0;
int **a;
bool flag[12][12] = {false};
void loang(int a[12][12],int i , int j){
	flag[i][j] = true ;
	if(a[i-1][j] == a[i][j]  && !flag[i-1][j] && i > 0) 
		loang(a,i-1,j);
	if(a[i+1][j] == a[i][j] && !flag[i+1][j] && i < 11)
		loang(a,i+1,j);
	if(a[i][j-1] == a[i][j] && !flag[i][j-1] && j > 0)
		loang(a,i,j-1);
	if(a[i][j+1] == a[i][j] && !flag[i][j+1]  && j < 11)
		loang(a,i,j+1);
}
int main()
{
	int a[12][12];
	for(int i = 0 ; i < 12 ; i++){
		for(int j = 0 ; j < 12 ; j++ ){
			a[i][j] = rand()%6;
		}
	}
	for(int i = 0 ; i < 12 ; i++){
		for( int j = 0 ; j < 12 ; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i = 0 ; i < 12 ; i++){
		for(int j = 0 ; j < 12 ; j++ )
		{
			if(!flag[i][j] && a[i][j]==5){
				so_mien++;
				loang(a,i,j);
			}
		}
	}
	cout<<"So Mien Lien Thong: "<<so_mien;
}

