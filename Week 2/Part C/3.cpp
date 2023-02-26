#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = 0;
    for(int i = n; i > 0; i--){
        for(int j = 0; j < n*2 ; j++){
            if( j < i) cout << " ";
            else if ( j > i + k) cout << " ";
            else cout << "*";
        }
        k = k + 2;
        cout << endl;
    }
    return 0;
}