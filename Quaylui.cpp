#include <bits/stdc++.h>
#define MAX 20
using namespace std;
 
int n;
int flag[MAX] = { 0 };
int a[MAX];
 
void show() {
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        if (!flag[i]) {
            a[k] = i; 
            
            if (k == n)
                show();
            else
			{
				flag[i] = 1;
                Try(k + 1);
            	flag[i] = 0;
			}
        }
    }
}
 
int main() {
    cout << "Mhap n: ";
    cin >> n;
    
    Try(2);
}
