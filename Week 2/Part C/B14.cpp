#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int Max = -1e6, Min = 1e6;
    int n; cin >> n;
    int dem = 0;
    while(true){
        int k;  cin >> k;
        if( k > Max) Max = k;
        if( k < Min) Min = k;
        dem ++ ;
        if(dem == n) break;

    }
    cout << Max << " " << Min;
}
