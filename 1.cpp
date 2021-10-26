#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap N : ";
	cin>>n;
	stack<int> stackHT;
	stack<int> stackLL;
	for(int i=1 ;i<=n ;i++)
	{
		if(i%2==0){// cac so chan la cac hanh dong hoan tac
			stackHT.push(i);
		}
	}
	cout<<"Cac Phan Tu Cua Hoan Tac : ";
	while(!stackHT.empty()){
		stackLL.push(stackHT.top());
		cout<<stackHT.top()<<" ";
		stackHT.pop();
	}
	cout<<"\nCac Phan Tu Cua Lam Lai : ";
	while(!stackLL.empty()){
		cout<<stackLL.top()<<" ";
		stackLL.pop();
	}
	return 0;
}
