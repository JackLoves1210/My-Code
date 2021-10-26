#include  <iostream>
#include <stdio.h>
#include <ctype.h>
#include <iomanip>
using namespace std;
//khai báo Sinh Viên
struct SinhVien{
	string MaSV;
	string name;
	int BirthDate;
	float score;
};
//tao Node
struct Node{
	SinhVien infor;
	Node *next;
};
//khai báo kiêu con tro
typedef Node *TRO;

//Tao moi danh sach rông
void create(TRO &L)
{
	L=NULL;
}
//KiemTra Danh Sach rong
int empty(TRO L){
	return L->next==NULL;
}
//Tao moi danh sach
void Input(SinhVien &X){
	cout<<"Nhap Ma Sinh Vien:";			fflush(stdin);		getline(cin,X.MaSV);
	cout<<"Nhap Ten Sinh Vien:";		fflush(stdin);		getline(cin,X.name);
	cout<<"Nhap Nam Sinh of SV:";							cin>>X.BirthDate;
	cout<<"Nhap Diem of SV:";								cin>>X.score;
}
void Input_List(TRO &L)
{
	TRO P,Q;
	SinhVien X;
	char tieptuc;
	create(L);
	do{
		
		Input(X);
		P = new Node;
		P->	infor = X;
		P->	next = NULL;
		if(L==NULL) L=P;
		else Q->next =P;
		Q=P;
		cout<<"Co Nhap Tiep Ko (C/K) ? : "; cin>>tieptuc;
	}while (toupper(tieptuc) == 'C');
}
void OutPut_List(TRO L)
{
	if(L == NULL)
	{
		cout<<"Danh Sach Rong:))";
		return;
	}
	cout<<setw(5)<<"STT";
	cout<<setw(10)<<"Ma SV";
	cout<<setw(25)<<"Ho Va Ten";
	cout<<setw(10)<<"Nam Sinh";
	cout<<setw(10)<<"Diem TK"<<endl;
	TRO Q =L;
	int i=0;
	while(Q != NULL)
	{
		SinhVien X = Q->infor;
		cout<<setw(5)<<i+1;
		cout<<setw(10)<<X.MaSV;
		cout<<setw(25)<<X.name;
		cout<<setw(10)<<X.BirthDate;
		cout<<setw(10)<<X.score<<endl;
		Q=Q->next;
		
	}
	
}
int main(){
	TRO L;
	cout<<"Nhap DS SINH VIEN\n";
	Input_List(L);
	cout<<"DS SINH VIEN\n";
	OutPut_List(L);
}

