#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float F_to_C (float f){
    return ( f - 32 )*5/9;
}
float C_to_K( float c){
    return F_to_C(c) + 273.15;
}
int main(){
    float Min, Max, stepSize;
    cin >> Min >> Max >> stepSize;
    for(float i = Min; i < Max; i += stepSize){
        cout << i << fixed << setprecision(2) <<" " << F_to_C(i) << " "<< fixed << setprecision(2)  << C_to_K(i) << endl;
    }
    return 0;

}