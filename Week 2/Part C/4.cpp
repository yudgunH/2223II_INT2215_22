#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < 2*n-1 ; j++){
            if( j < i) cout << " ";
            else if ( j >= 2*n - 1 - k) cout << " ";
            else cout << "*";
        }
        k = k + 1;
        cout << endl;
    }
    return 0;
}