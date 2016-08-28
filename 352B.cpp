#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	set<char> mys;
	string a;
	scanf("%d", &n);
	cin >> a;

	for(int i = 0; i < n; ++i){
		mys.insert(a[i]);
	}
	if(n<=26)
		cout << n - mys.size() << endl;
	else
		cout << -1 << endl;
}
