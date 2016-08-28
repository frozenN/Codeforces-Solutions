#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	string a;
	cin >> k;
	cin >> a;
	int sign[k+1];
	int vis[k+1];
	memset(vis, 0, sizeof vis);
	for(int i = 1; i <= k; ++i){
		cin >> sign[i];
		if(a[i-1] == '<') sign[i] = sign[i] * -1;
		// cout << sign[i] << " ";
	}
	// cout << endl;
	int i = 1;
	while(i <= k  && i >= 1){
		if(vis[i] == 1)
		{
			printf("INFINITE\n");
			return 0;
		}
		else
		{
			vis[i] = 1;
			i += sign[i];
		}
	}
	printf("FINITE\n");
}