#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;  cin >> n;
    int tmp = n;
    int sum = 0;
    while(tmp){
        sum += tmp %10;
        tmp /= 10;
    }
    cout << sum << endl;
    return 0;

}