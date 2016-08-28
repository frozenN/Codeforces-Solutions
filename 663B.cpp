#include <bits/stdc++.h>

using namespace std;

int tonumber(string k){
	int dez = 1, ans = 0;
	// cout << k << endl;
	reverse(k.begin(), k.end());
	for(int i = 1; i <= k.size(); ++i){
		ans += (k[i-1] - '0')*dez;
		dez *= 10;
	}
	// cout << ans << endl;
	return ans;
}

int main(){
	string k;
	getline(cin, k);
	int qm = 0, ans, last;
	for(int i = 0; i < k.size(); ++i){
		if(k[i] == '?') { qm++; last = i; }
		if(k[i] == '=') ans = tonumber(k.substr(i+2, (k.size()-1)));
	}
	int aux = ans;
	for(int i = 0; i < k.size(); ++i){
		if(k[i] == '?'){
			if(i != 0 and k[i-2] == '-') aux++;
			else if(i!=0 and k[i-2] == '+')
				aux--;
		}
	}
	cout << aux << endl;
	// if(qm == 1) cout << "Possible" << endl << ans << " = " << ans << endl;
	if(aux > ans || aux == 0 || aux < 0 ) cout << "Impossible" << endl;
	else{
		printf("Possible\n");
		for(int i = 0; i < k.size(); ++i){
			if(k[i] == '?' && i != last) printf("1");
			else if(i == last) printf("%d", aux);
			else cout << k[i];
		}
	cout << endl;
	}

}