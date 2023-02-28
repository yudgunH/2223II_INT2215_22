// Tổng đôi
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
                for(int z = j + 1; z < n; z++){
                    if (a[i] + a[j] + a[z] == 0) {
                    cout << a[i] << " " << a[j] << " " << a[z] << endl;
                    cnt ++;
                    if(cnt > 0) return 0;
                }
            }
        }
    }
    return 0;
} // namespace std;

