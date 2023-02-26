#include<iostream>
#include<cmath>
using namespace std;
bool perfectNum(int n){
    if ( sqrt(n) * sqrt(n) == n ) return true;
    else return false;
}
int main(){
    int n; cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        cout << i*i << endl;
    }
    return 0;
}