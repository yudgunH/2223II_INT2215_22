#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    int p0w = 1;
    for(int i = 0; i < y; i++){
        p0w = p0w * x;
    }

    cout << p0w;
    return 0;
}