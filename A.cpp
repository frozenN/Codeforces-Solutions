#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, b, d;
	scanf("%lld%lld%lld", &n, &b, &d);
	long long int as = 0, ac, ans = 0;
	for(int i = 0; i < n; ++i)
	{
		scanf("%lld", &ac);
		if(ac <= b)
			as += ac;
		if(as > d) {ans++; as = 0;}
	}
	printf("%lld\n", ans);
	return 0;
}


