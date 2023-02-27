#include<iostream>
#include<string>
using namespace std;
// Xâu đối xứng
bool Xaudoixung(string s){
	int n = s.length();
	for(int i=0; i<=n/2; i++){
		if(s[i]!=s[n-i-1]) return false;
	}
	return true;
}
int main(){
	string s;
	getline(cin,s);
	if(Xaudoixung(s)) cout << "YES";
	else cout << "NO";
	
}