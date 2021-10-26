#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int so_mien = 0;
int O[5][6] ={
	{1 , 1 , 0 , 0 , 0 , 1},
	{1 , 0 , 0 , 0 , 0 , 0},
	{1 , 0 , 0 , 1 , 1 , 0},
	{0 , 1 , 1 , 0 , 0 , 1},
	{0 , 0 , 1 , 0 , 1 , 1},
};
void mang2c(int a[][12]){
	ifstream fin("BTLOANG.TXT");
	for(int i = 0 ; i < 12 ; i++){
		for( int j = 0 ; j < 12 ; j++){
			fin>>a[i][j];
		}
	}
	fin.close();
}
void display_mang(int a[][12]){
	for(int i = 0 ; i < 12 ; i++){
		for( int j = 0 ; j < 12 ; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}	
bool flag[12][12] = {false};
void loang(int i , int j){
	flag[i][j] = true ;
	if(O[i-1][j] == O[i][j]  && !flag[i-1][j] && i > 0) 
		loang(i-1,j);
	if(O[i+1][j] == O[i][j] && !flag[i+1][j] && i < 4)
		loang(i+1,j);
	if(O[i][j-1] == O[i][j] && !flag[i][j-1] && j > 0)
		loang(i,j-1);
	if(O[i][j+1] == O[i][j] && !flag[i][j+1]  && j < 5)
		loang(i,j+1);
}
int main()
{
	int a[12][12];
	mang2c(a);
	cout<<"\nDay La : \n";
	display_mang(a);
	for(int i = 0 ; i < 12 ; i++){
		for(int j = 0 ; j < 12 ; j++ ){
			flag[i][j] = false;
		}
	}
	for(int i = 0 ; i < 12 ; i++){
		for(int j = 0 ; j < 12 ; j++ )
		{
			if(!flag[i][j]){
				so_mien++;
				loang(i,j);
			}
		}
	}
	cout<<"So Mien Lien Thong: "<<so_mien;
}

