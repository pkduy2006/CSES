#pragma GCC optimize(3)
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC target("avx","sse2")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

const int steps_x[] = {2, 1, -1, -2, -2, -1, 1, 2};
const int steps_y[] = {1, 2, 2, 1, -1, -2, -2, -1};
int n;
long long res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int k = 1; k <= n; k++)
    {
        res = 0;
        for(int i = 1; i <= k; i++)
        {
            for(int j = 1; j <= k; j++)
            {
                for(int a = 0; a < 8; a++)
                {
                    if(1 <= i + steps_x[a] && i + steps_x[a] <= k && 1 <= j + steps_y[a] && j + steps_y[a] <= k)
                        res--;
                }
                res += k * k - 1;
            }
        }

        cout << res / 2 << '\n';
    }

    return 0;
}