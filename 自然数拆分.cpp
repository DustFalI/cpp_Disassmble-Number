#include <bits/stdc++.h>
using namespace std;
int n, sub[10] = {0};
void dfs(int s, int step)
{
	if(s == 0)
	{
		for(int i = 0; i < step-1; i++)
		{
			cout << sub[i] << "+";
		}
		cout << sub[step-1] << endl;
	}
	for(int i = 1; i <= s; i++)
	{
		if(i < sub[step-1]) continue;
		sub[step] = i;
		dfs(s - i,step+1);
	}
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n/2; i++)
	{
		sub[0] = i;
		dfs(n-i,1);
	}
	return 0;
}
