#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int v[n], lastt = 0;
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &v[i]);
		if(v[i] - lastt > 15)
		{
			break;
		}
		lastt = v[i];
	}
	printf("%d\n", min(lastt+15, 90));
}