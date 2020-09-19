#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int mxn = 505, mxm = 1005;
int n, m, a[mxn], dp[mxn][mxm], cnt[mxm];

int main()
{
	int c;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		cnt[a[i]] ++;
		c = max(c, a[i]);
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if ()
		}
	}
}