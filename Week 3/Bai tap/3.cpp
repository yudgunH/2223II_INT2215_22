#include<iostream>
#include<cmath>
using namespace std;
int main()
{  
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count[10] = {0};
    for(int i=0; i<n; i++){
        count[a[i]] ++;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " " << count [a[i]] << endl;
    }
    return 0;
    
} // namespace std;

