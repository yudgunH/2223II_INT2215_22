#include<iostream>
#include<cmath>
using namespace std;

int main()
{   
    int n;  cin >> n;
    int max = -1e6;
    int min = 1e6;
    int sum = 0;
    int dem = 0;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if ( a[i] > max) max = a[i];
        if ( a[i] < min) min = a[i];
        if ( a[i] % 2 == 0) sum += a[i];
        if ( a[i] % 2 == 1) dem ++;
    }
    cout << min << endl << max << endl << sum << endl << dem << endl;
    return 0;

    
} // namespace std;

