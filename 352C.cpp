#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define F first
#define S second
#define mp make_pair
#define dpp(x1, y1, x2, y2) sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))

int botnumber;
vector<pair<int, int> > bp;
double pd[1000005];
pair<int, int> adil, bera, recbyn;


double solve(int it)
{
	double &l = pd[it];
	if(l == -1)
	{
		for(int i = it + 1; i < bp.size(); ++i) // ql pegar partindo de it
    	{
    		
      		if(dpp(adil.F, bp[i].F, adil.S, bp[i].S) + solve(i) <  solve(i) + dpp(bera.F, bp[i].F, bera.S, bp[i].S) )
      			{ adil.F = recbyn.F; adil.S = recbyn.S; }
      		else
      			{ bera.F = recbyn.F; bera.S = recbyn.S; }

      		l += min(dpp(adil.F, bp[i].F, adil.S, bp[i].S) + dpp(bp[i].F, recbyn.F, bp[i].S, recbyn.S)  + solve(i), dpp(bera.F, bp[i].F, bera.S, bp[i].S)+dpp(bp[i].F, recbyn.F, bp[i].S, recbyn.S)+solve(i));
		}
	}
	  return l;
}

int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	adil = mp(x,y);
	scanf("%d %d", &x, &y);
	bera = mp(x,y);
	scanf("%d %d", &x, &y);
	recbyn = mp(x,y);
	scanf("%d", &botnumber);
	for(int i = 0; i < botnumber; ++i) pd[i] = -1.0;
	for(int i = 0; i < botnumber; ++i)
	{
		scanf("%d %d", &x, &y);
		bp.push_back(mp(x,y));
	}
	cout << solve(0) << endl;

	return 0;
}