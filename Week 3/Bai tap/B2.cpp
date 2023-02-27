#include<iostream>
#include<string>
using namespace std;
bool XauDoiXung(string S){
    int i = 0;
    int j = S.length() - 1;
    while(true){
        if( S[i] != S[j]) return false;
            i++;
            j--;
        if( i ==j ) break;
    }
    return true;
}
int main(){
    string S;
    getline(cin, S);
    cout << XauDoiXung(S);
    return 0;
}