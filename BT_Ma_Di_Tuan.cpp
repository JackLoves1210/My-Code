#include <bits/stdc++.h>
#define MAX 8
using namespace std;
 
int A[MAX][MAX] = { 0 };//Khoi tao mang gi� tri 0
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int dem = 0;//So buoc di
int n;
 
void xuat() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout<<A[i][j]<<"  ";
        cout << endl;
    }
    cout << endl;
}
 
void diChuyen(int x, int y) {
    ++dem;//Tang gi� tri buoc di
    A[x][y] = dem;//��nh dau d� di
    for (int i = 0; i < 8; i++)    {
        //Kiem tra xem m� d� di het b�n co chua
        if (dem == n * n) {
            cout << "Cac buoc di la: \n";
            xuat();
          	exit(0);//k?t th�c chuong tr�nh
        }
        //Neu chua di het b�n co th� tao buoc di moi
        int u = x + X[i];//tao mot vi tr� x moi
        int v = y + Y[i];//tao mot vi tr� y moi
        //Neu hop li th� tien h�nh di chuyen
        if (u >= 0 && u < n&&v >= 0 && v < n&& A[u][v] == 0)
            diChuyen(u, v);
    }
    //Neu kh�ng t�m duoc buoc di th� ta phai tro lai c�c gi� tri ban dau
    --dem;
    A[x][y] = 0;
}
int main() {
    cout << "Nhap n: ";
    cin >> n;
    int x, y;
    cout << "Nhap vi tri ban dau.\nx: ";
    cin>>x;
    cout << "y: ";
    cin>>y;
    diChuyen(x, y);
    //Neu kh�ng t�m duoc buoc di th� se th�ng b�o
    cout << "Khong tim thay duong di.";
}
