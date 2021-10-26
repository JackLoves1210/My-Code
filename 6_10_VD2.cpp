#include <bits/stdc++.h>
#include <stack>

using namespace std;
struct data{
	int n;
	char a;
	char b;
	char c;
};
data H1(data x){
	x.n = x.n -1;
	swap(x.a,x.b);
	return x;
}
data H2(data x){
	x.n = 1;
	return x;
}
data H3(data x){
	x.n = x.n -1;
	swap(x.b,x.c);
	return x;
}
void chuyen(data x){
	stack <data> s;
	s.push(x);
	while(!s.empty()){
		data y = s.pop();
		if(y.n==1){
			cout<<"Chuyen 1 dia tu "<<y.a<<" sang "<<y.c<<" \n"; 
		}
		else{
			s.push(H1(y));//(x.n - 1, x.b ,x.a ,x.c)
			s.push(H2(y));//(1,x.a , x.b , x.c)
			s.push(H3(y));//(x.n - 1 , x.a , x.c , x.b)
		}
	}
}
int main(){
	struct data Data;
	cout<<"Nhap so dia n = ";
	cin>>Data.n;
	Data.a = 'a';
	Data.b = 'b';
	Data.c = 'c';
	cout<<"\n";
	chuyen(Data);
}

