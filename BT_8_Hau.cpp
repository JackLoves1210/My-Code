#include<stdio.h>
#include<math.h>
int a[16],n;
bool Ok(int x2,int y2){
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    return true;
}
 
void Xuat(int n){
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i){
    for(int j = 1;j<=n;j++){
        if(Ok(i,j)){
            a[i] = j;
            if(i==n) Xuat(n);
            Try(i+1);
        }
    }
}
 
int main(){
    n = 8;// ? dây mình cho bài toán là 8 quân h?u trên bàn 8*8
    Try(1);
    return 0;
}
