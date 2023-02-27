#include<iostream>
using namespace std;
// Số đối gương
int Reverse( int n){
    int tmp;
    tmp = n;
    int _Reverse = 0;
    while (tmp){
        _Reverse = _Reverse * 10 + tmp % 10;
        tmp /= 10;
    }
    return _Reverse;
}
int main(){
    int n; cin >> n;
    while (n){
        int a, b;   cin >> a >> b;
        int dem = 0;
        for(int i= a; i <= b; i++){
            if( i == Reverse(i)) dem ++;
        }
        cout << dem << endl;
        n--;
    }
    return 0;
}
	
	