#include<iostream>
#include<string>
using namespace std;
int main(){
    string f1, f2;
    f1= "a"; cout << f1 << endl;
    f2= "b"; cout << f2 << endl;
    for (int i = 2; i < 10; i++){
        string fi;
        fi = f1 + f2;
        cout << fi << endl;
        f1 = f2;
        f2 = fi;
    }
    

    return 0;
}