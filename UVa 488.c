#include<stdio.h>
int main()
{
    long long int amp, fre, a,i,j,t,m,tc;
    scanf("%lld", &tc);
    for(t=1;t<=tc;t++)
    {
    scanf("%lld %lld", &amp, &fre);
    for(a=1;a<=fre;a++)
    {
        for(i=1; i<=amp; i++)
        {
          for(j=1; j<=i; j++)
            {
                printf("%lld", i);
            }
            printf("\n");
        }
        for(i=amp-1; i>=1; i--)
        {
            for(j=1; j<=i; j++)
            {
                printf("%lld", i);
            }
            if(t==tc&&a==fre&&i==1)
                break;
            printf("\n");
        }
        printf("\n");
        }
    }
    return 0;
}
