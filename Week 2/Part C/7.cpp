#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int previous_num = -1;
    while(true){
        int current_num;
        cin >> current_num;
        if( current_num < 0) break;
        if( previous_num == current_num) continue;
        else cout << current_num << endl;
        previous_num = current_num ;
    }
    return 0;
}