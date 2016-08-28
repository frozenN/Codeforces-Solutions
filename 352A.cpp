#include <bits/stdc++.h>

using namespace std;




int main(){

	int i = 0, aux;
	string n, a;
	
	while(n.size() < 1001){
		a =  to_string(i);
		i++;
		n = n + a;
	}
	cout << n << endl;
	scanf("%d", &aux);
	cout << n[aux+1] << endl;
	return 0;
}