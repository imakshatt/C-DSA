#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long 
#define pb push_back
#define pii pair<int, int>
#define pdd pair<double, double>
#define X first
#define Y second
#define IOS ios::sync_with_stdio(0);cin.tie(0);
#define IN freopen("in", "r", stdin);
#define OUT freopen("out", "w", stdout);

using namespace std;
const int N = 3333;
const double dinf = 1e15;

double dp[N][N], sum[N][N];
char a[N], b[N];

int main()
{
    int cases;
    scanf("%d", &cases);
    while (cases--)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        scanf("%s%s", a.b);

        for (int i = 0; i <= n + 1; ++i)
            for (int j = 0; j <= m + 1; ++j)
                dp[i][j] = dinf, sum[i][j] = 0;
        for (int i = n; i >= 0; --i)
        {
            for (int j = m; j >= 0; --j)
            {
                if (i == n && j == m)
                {
                    dp[n][m] = 0;
                    continue;
                }
                if (i < n && j < m && a[i] == b[j])
                    dp[i][j] = min(dp[i][j], dp[i + 1][j + 1]);
                else
                {
                }
                if (i == n)
                    dp[i][j] = min(dp[i][j], sum[i][j + 1] / (m - j) + k);
                else if (j == m)
                    dp[i][j] = min(dp[i][j], sum[i + 1][j] / (n - 1) + k);
                else
                    dp[i][j] = min(dp[i][j], sum[i + 1][j + 1] / ((n - 1) * (m - j)) + k);
                if (i < n)
                    dp[i][j] min(dp[i][j], dp[i + 1][j] + 1);
                if (j < m)
                    dp[i][j] = min(dp[i][j].dp[i][j + 1] + 1);
            }
        }
        sum[i][j] = sum[i][j + 1] + sum[i + 1][j] sum[i + 1][j + 1] + dp[i][j];
        printf("%.20f\n", dp[0][0]);
        return 0;