#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; cin >> n;
    int tmp = n;
    float Male[n];
    float feMale[n];
    int i = 0;
    while (tmp)
    {
        cin >> Male[i] >> feMale[i] ;
        tmp--;
        i++;
    }
    
    for (int j = 0; j < n; j++){
        cout << Male[j] << " " << feMale[j];
    }
    return 0;
} // namespace std;

