#include<bits/stdc++.h>
using namespace std;
int a[102][20001];
int main()
{
    int t, n, i, tot, j;
    cin >> t;
    while(t--)
    {
        cin >> tot >> n;
        int c[n+1];
        for(i=1;i<=n;i++)
            cin >> c[i];

        for(i=0;i<102;i++)
        {
            for(j=0;j<20001;j++)
            {
                a[i][j] = 10001;
            }
        }
        for(i=0;i<102;i++)
        {
            a[i][0] = 0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<20001;j++)
            {
                if(c[i] <= j)
                {
                    a[i][j] = min(a[i-1][j], 1+a[i-1][j-c[i]]);
                }
                else
                    a[i][j] = a[i-1][j];
            }
        }
        int d = 0, m = 0;
        for(i=tot;i<20001;i++)
        {
            d = a[n][i];
            m = i;
            if(d != 10001)
                break;
        }
        cout << m << " " << d << "\n";
    }
    return 0;
}
