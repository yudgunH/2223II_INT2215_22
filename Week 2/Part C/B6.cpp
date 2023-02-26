#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
	if (b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    int x, y;
    cin >> x >> y;
    int r = gcd(x, y);
    if( y == 1 && x > 0) cout << abs(x/r);
    else if ( y == 1 && x < 0) cout << -abs(x/r);
    else if( x < 0 && y > 0 || x > 0 && y < 0) cout << -abs(x/r) << "/" << abs(y/r);
    else if( x < 0 && y < 0) cout << abs(x/r) << "/" << abs(y/r);
    else cout << abs(x/r) << "/" << abs(y/r);
    return 0;
}