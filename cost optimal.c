#include <limits.h>
#include <stdio.h>
int min(int x, int y, int z);
int minCost(int cost[R][C], int m, int n);
{
	int i, j;
	int tc[R][C];
	tc[0][0] = cost[0][0];
	for (i = 1; i <= m; i++)
		tc[i][0] = tc[i - 1][0] + cost[i][0];
	for (j = 1; j <= n; j++)
		tc[0][j] = tc[0][j - 1] + cost[0][j];
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			tc[i][j] = min(tc[i - 1][j - 1],
						tc[i - 1][j],
						tc[i][j - 1])
					+ cost[i][j];
	return tc[m][n];
}
int min(int x, int y, int z)
{
	if (x < y)
		return (x < z) ? x : z;
	else
		return (y < z) ? y : z;
}
int main()
{
	int cost[R][C] = { { 1, 2, 3 },
					{ 4, 8, 2 },
					{ 1, 5, 3 } };
	printf(" %d ", minCost(cost, 2, 2));
	return 0;
}