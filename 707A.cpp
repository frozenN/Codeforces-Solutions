#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	bool ans = true;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a; ++i)
	{
		for(int j = 0; j < b; ++j)
		{
			char aux;
			cin >> aux;
			if(aux == 'C' || aux == 'M' || aux == 'Y')
				ans = false;
		}
	}
	printf("%s\n", ans ? "#Black&White" : "#Color");
}