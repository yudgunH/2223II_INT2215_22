#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double Calculate (double num1, char operat, double num2){
    switch (operat)
    {
    case '-':
        return num1 - num2;
        break;
    case '+':
        return num1 + num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        if( num2 == 0 ) break;
        else return num1 / num2 ;
        break;
    default:
        break;
    }
}
int main(){
    double num1, num2;
    char operat;
    cin >> num1 >> operat >> num2 ;
    cout << fixed << setprecision(2) << Calculate(num1, operat, num2) << endl;
    return 0;
}