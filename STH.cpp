#include<bits/stdc++.h>
using namespace std;
void next(int *a,int k,int i)
{
    a[i]++;
    i++;
    while(i<=k)
    {
        a[i]=a[i-1]+1;
        i++;
    }
}
void view(int *a,int k)
{
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<endl;
}
void List(int n, int k)
{
    int i;
    int a[k+1];
    for(int i=1;i<=k;i++)
    {
        a[i]=i;
    }
    do
    {
        view(a,k);
        i=k;
        while(i>0 and a[i]==n-k+i)
            i--;
        if(i>0)
            next(a,k,i);
    }while(i>0);
}
int main()
{
    int n,k;
    cin>>n>>k;
    List(n,k);

}
