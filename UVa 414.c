#include<stdio.h>
#include<string.h>
#include<algorithm>
int main()
{
    int n;
    char s[26];
    while (scanf("%d",&n)==1)
    {
        if (!n) return 0;
        int max_x=0;
        int total_x=0;
        getchar();
        for (int i=0;i<n;i++)
        {
            gets(s);
            int cnt=0;
            for (int j=0;j<25;j++)
            {
                if (s[j]=='X') cnt++;
            }
            total_x+=cnt;
            max_x=max(max_x,cnt);
        }
        int ans=max_x*n-total_x;
        printf("%d\n",ans);
    }
    return 0;
}
