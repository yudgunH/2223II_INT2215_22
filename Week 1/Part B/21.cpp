#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    float s = (1.0*a+b+c)/2;
    cout << sqrt(s*(s-a)*(s-b)*(s-c));
    return 0;
}