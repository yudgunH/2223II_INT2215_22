#include<iostream>
using namespace std;
// Tìm lặp
bool soLap(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if( a[i] == a[j]) return true;
        }
    }
    return false;
}
int main(){
    int n;  cin >> n;
    int seen[10000];
    int chuoi; cin >> chuoi;
    for(int i = 0; i < n; i++){
        seen[i] = chuoi % 10;
        chuoi /= 10;
    }
    if(soLap(seen,n) == true) cout << "YES";
    else cout << "NO";
    return 0;
}