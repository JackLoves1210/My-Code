#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
using namespace std;

int main(){
	int d = 0;
    srand((int)time(0));
    int r;
    for(int i = 0; i < 144; ++i){
        r = random(0,5);
        printf("%d ",r);
        d++;
    }    
    cout<<"D = "<<d;
}
